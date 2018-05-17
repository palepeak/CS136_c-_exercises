import junit.framework.TestCase;

import java.io.*;


public class MainTest extends TestCase {
    int [] testboard = new int [81];
    private final ByteArrayOutputStream outContent = new ByteArrayOutputStream();


    public void testTest2() throws Exception {
    }

    public void testLegal() throws Exception {
        Main.toBoard("testBoard.txt", testboard);

        assertTrue(Main.legal(testboard, 1, 0,0));
        for(int i = 2; i <=9; i++) {
            assertFalse(Main.legal(testboard,i,0,0));
        }

        assertTrue(Main.legal(testboard, 1, 1,8));
        for(int i = 2; i <=9; i++) {
            assertFalse(Main.legal(testboard,i,1,8));
        }

        assertTrue(Main.legal(testboard, 1, 6,3));
        for(int i = 2; i <=9; i++) {
            assertFalse(Main.legal(testboard,i,6,3));
        }

    }

    public void testSolve() throws Exception {
    }

    public void testMain() throws Exception {
        String [] temp = {"testBoard2.txt"};

        System.setOut(new PrintStream(outContent));

        Main.main(temp);
        String out = outContent.toString();
        String exp = "426571398\r\n857293146\r\n139468275\r\n971385624\r\n543726819\r\n682149753\r\n794632581\r\n265814937\r\n318957462\r\n";
        System.setOut(System.out);
        assertEquals(exp, out);



    }



}