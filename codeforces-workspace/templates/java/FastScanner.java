import java.io.*;
import java.util.*;

public class FastScanner {
    private final InputStream in;
    private final byte[] buffer = new byte[1 << 16];
    private int ptr = 0, len = 0;
    
    public FastScanner(InputStream in) {
        this.in = in;
    }
    
    private int read() throws IOException {
        if (ptr >= len) {
            len = in.read(buffer);
            ptr = 0;
            if (len <= 0) return -1;
        }
        return buffer[ptr++];
    }
    
    public String next() throws IOException {
        StringBuilder sb = new StringBuilder();
        int c;
        while ((c = read()) != -1 && c <= ' ') {}
        if (c == -1) return null;
        do {
            sb.append((char) c);
            c = read();
        } while (c != -1 && c > ' ');
        return sb.toString();
    }
    
    public int nextInt() throws IOException {
        String s = next();
        return s == null ? 0 : Integer.parseInt(s);
    }
    
    public long nextLong() throws IOException {
        String s = next();
        return s == null ? 0L : Long.parseLong(s);
    }
}
