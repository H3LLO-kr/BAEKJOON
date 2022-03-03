import sys
class sudoku: #스도쿠 객체를 생성합니다.
    def __init__(self, input):
        self.board = input[:]
        self.zero_list = [(i, j) for i in range(9) for j in range(9) if input[i][j] == 0]
    def check(self, pos, num):
        if num in self.board[pos[0]]:
            return False
        for i in range(9):
            if num == self.board[i][pos[1]]:
                return False
        for i in range(3 * (pos[0] // 3), 3 * (pos[0] // 3) + 3):
            for j in range(3 * (pos[1] // 3), 3 * (pos[1] // 3)+ 3):
                if num == self.board[i][j]:
                    return False
        return True
    def solve(self, i):
        for j in range(1, 10):
            if self.check(self.zero_list[i], j):
                self.board[self.zero_list[i][0]][self.zero_list[i][1]] = j
                if i == len(self.zero_list) - 1:
                    return self.board
                else:
                    next = self.solve(i + 1)
                    if next == False:
                        self.board[self.zero_list[i][0]][self.zero_list[i][1]] = 0
                    else:
                        return next
        return False

sudoku_input = []
for i in range(9):
    sudoku_input.append(sys.stdin.readline())
for i in range(len(sudoku_input)):
    sudoku_input[i] = sudoku_input[i].split()
    sudoku_input[i] = list(map(int, sudoku_input[i]))
sudoku_output = sudoku(sudoku_input)
sudoku_output_list = sudoku_output.solve(0)
for i in range(9):
    print(' '.join(map(str, sudoku_output_list[i])))