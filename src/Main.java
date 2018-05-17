import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static boolean legal (int [] board, int add, int x, int y) {
        int orig = board[x+y*9];
        board[x+y*9] = add;
        int count = 0;
        for (int i = 0; i < 9; i++) {
            if (board[i+y*9] == add) count++;
            if (board[x+i*9] == add) count++;
        }

        for (int i = 3*(y/3); i < 3*(y/3) + 3; i++) {
            for (int j = 3*(x/3); j < 3*(x/3) + 3; j++){
                if (board[i*9+j] == add) count++;
            }
        }

        board[x+y*9] = orig;
        if (count == 3) return true;
        else return false;
    }

    public static boolean solve (int [] board) {
        //is it solved?
        boolean solved = true;
        for(int i = 0; i < 81; i++) {
            if (board[i] == 0 || !legal(board, board[i], i%9, i/9)) {
                solved = false;
                break;
            }
        }
        if (solved) return true;


        //finds first unused slot
        int x=0;
        int y=0;
        for(int i = 0; i < 9; i++) {
            for (int j = 0; j < 9 ; j++) {
                if (board[i*9+j] == 0) {
                    y = i;
                    x = j;
                    i = 9;
                    j = 9;
                }
            }
        }

        //determines possible nums for slot
        int [] sol = new int [9];
        int cur = 0;
        for (int i = 1; i <= 9; i++) {
            if (legal(board, i, x, y)) {
                sol[cur] = i;
                cur++;
            }
        }

        //tries all nums
        for (int i = 0; i < cur; i++) {
            board[x+y*9] = sol[i];
            if (solve(board)) return true;
            else board[x+y*9] = 0;
        }
        return false;



    }

    public static void main(String[] args) throws IOException{

        //getting board
        int [] board = new int [81];
        toBoard(args[0], board);
        solve(board);

        for(int i = 0; i < 9; i++) {
            for (int j = 0; j < 9 ; j++) {
                System.out.print (board[i*9+j]);
            }
            System.out.println();
        }

    }

    public static void toBoard(String file, int [] testboard) throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader(file));
        String currentLine;
        for(int i = 0; i < 9; i++) {
            currentLine = reader.readLine();
            for (int j = 0; j < 9; j++) {
                testboard[i*9+j] = Character.getNumericValue(currentLine.charAt(j));
            }
        }
        reader.close();
    }
}
