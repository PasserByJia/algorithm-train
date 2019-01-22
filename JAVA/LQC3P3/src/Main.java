import java.io.*;
public class Main {
	private static FileWriter fileWriter;
	public static void main(String[] args) {
		File readFile = new File("a.txt");//∂¡»Îa.txt
        File writeFile = new File("b.html");// ‰≥ˆb.html
        String in;
        try {
            FileReader fileReader = new FileReader(readFile);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            fileWriter = new FileWriter(writeFile);
            fileWriter.write("<html><body>\n");
            while ((in = bufferedReader.readLine()) != null) {
                int pstartflag = -1;
                int pendflag = -1;
                int sstartflag = -1;
                int sendflag = -1;
                int cstartflag = -1;
                int cendflag = -1;
                int vstartflag = -1;
                int vendflag = -1;
                for (int i = 0; i < in.length(); i++) {
                    char is = in.charAt(i);//–¥¥÷ÃÂ
                    if (in.contains("public")) {
                        pstartflag = in.indexOf("public");
                        pendflag = pstartflag + 5;
                    }
                    if (in.contains("static")) {
                        sstartflag = in.indexOf("static");
                        sendflag = sstartflag + 5;
                    }
                    if (in.contains("class")) {
                        cstartflag = in.indexOf("class");
                        cendflag = cstartflag + 4;
                    }
                    if (in.contains("void")) {
                        vstartflag = in.indexOf("void");
                        vendflag = vstartflag + 3;
                    }

                    if (i == pstartflag || i == sstartflag || i == cstartflag
                            || i == vstartflag) {
                        fileWriter.write("<b>");
                    }

                    if (is == ' ') {
                        fileWriter.write("&nbsp;");
                    } else if (is == '\t') {
                        fileWriter.write("&nbsp;&nbsp;&nbsp;&nbsp;");
                    } else if (is == '&') {
                        fileWriter.write("&amp;");
                    } else if (is == '<') {
                        fileWriter.write("&lt;");
                    } else if (is == '>') {
                        fileWriter.write("&gt;");
                    } else if (is == '"') {
                        fileWriter.write("&quot;");
                    }else
                    if (is == '/'
                            && in.charAt(i + 1) == '/'
                            && !(in.substring(i,in.length()).contains("\"") && in
                                    .substring(0, i).contains("\""))) {

                        fileWriter.write("<font color=green>");
                        fileWriter.write(is);
                    } else {
                        fileWriter.write(is);
                    }
                    if (i == sendflag || i == vendflag || i == pendflag
                            || i == cendflag) {
                        fileWriter.write("</b>");
                    }
                }
                if (in.contains("//")) {
                    fileWriter.write("</font>");
                }

                fileWriter.write("<br/>\n");
            }
            fileWriter.write("</body></html>\n");
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                fileWriter.flush();
                fileWriter.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

        }
	}
}
