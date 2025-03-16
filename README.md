This program manages customer orders and inventory in a store. It reads product stock and customer orders from input files, processes the data, updates stock levels, and generates detailed reports.

How It Works Reads stock data from f_in_Stoc, initializing products with name, price, and available quantity. Processes customer orders from f_in_Clienti, verifying stock availability and updating quantities. Generates reports: output_comenzi.txt – Contains detailed summaries of customer orders, including total costs. output_stoc_ramas.txt – Displays updated stock levels after processing all orders. Ensures memory safety by freeing dynamically allocated objects and closing all files properly.