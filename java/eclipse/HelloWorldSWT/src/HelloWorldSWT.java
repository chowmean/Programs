
public class HelloWorldSWT {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

Display display = new Display();
Shell shell = new Shell(display);
shell.setText("Hello world!");
shell.open();
while (!shell.isDisposed()) {
if (!display.readAndDispatch()) display.sleep();
}
display.dispose();

	}

}
