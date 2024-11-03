## Fast Input-Output Java
A `JAVA` template for faster I/O times. 

### How to use it?
Copy this template into your local system and write your code using this template to write CP-friendly codes.

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;

import java.util.StringTokenizer;

public class JavaTemplete {

  static BufferedReader br;
  static PrintWriter out;
  static StringTokenizer st;

  public static void main(String[] args) throws IOException {
    br = new BufferedReader(new InputStreamReader(System.in));
    out = new PrintWriter(new OutputStreamWriter(System.out));
    // br = new BufferedReader(new FileReader("in.txt"));
    // out = new PrintWriter(new FileWriter("out.txt"));

    out.close();
  }

  static String next() throws IOException {
    while (st == null || !st.hasMoreTokens())
      st = new StringTokenizer(br.readLine().trim());
    return st.nextToken();
  }

  static long readLong() throws IOException {
    return Long.parseLong(next());
  }

  static int readInt() throws IOException {
    return Integer.parseInt(next());
  }

  static double readDouble() throws IOException {
    return Double.parseDouble(next());
  }

  static char readCharacter() throws IOException {
    return next().charAt(0);
  }

  static String readLine() throws IOException {
    return br.readLine().trim();
  }
}
```
## CPP-14 sublime-build

```{
"cmd" : ["g++ -std=c++14 $file_name -o $file_base_name && timeout 4s ./$file_base_name<input.txt>output.txt"],
"selector" : "source.c",
"shell": true,
"working_dir" : "$file_path"
}
```

## Java sublime-build
```  { 
  "cmd": ["javac \"$file_name\" && java \"$file_base_name\" <input.txt> output.txt"],
  "shell": true, 
  "file_regex": "^(...*?):([0-9]*):?([0-9]*)", 
  "selector": "source.java" 
}
```

