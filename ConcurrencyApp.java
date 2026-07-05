package portfolioProject;

public class ConcurrencyApp {
	
	//create function countUp
	public static void countUp() {
		//FOR counter = 0 to 20
		for (int i = 0; i <= 20; i++) {
			//Display counter
			System.out.println(i);
		}
	}
	
	//create function countDown
	public static void countDown() {
		//FOR counter = 20 down to 0
		for (int i = 20; i >= 0; i--) {
			//Display counter
			System.out.println(i);
		}
	}
				
	public static void main(String[] args) throws InterruptedException {
		// Create first thread and run countUp
		System.out.println("Counting up from 0 to 20:");
		Thread firstThread = new Thread(ConcurrencyApp::countUp);
		firstThread.start();
		//Wait for first thread to finish
		firstThread.join();

		//Create second thread and run countdown
		System.out.println("\nCounting down from 20 to 0:");
		Thread secondThread = new Thread(ConcurrencyApp::countDown);
		secondThread.start();
		//wait for second thread to finish
		secondThread.join();
		
		//display message the program has completed
		System.out.println("\nThe program has successfully completed.");
		}
		
}
