import java.io.*;
import java.util.*;

public class p2 {

    public static List<String> fetchProductsToDisplay(
            List<List<String>> products,
            int sortParameter,
            int sortDirection,
            int productsPerPage,
            int pageNumber) {

        // Sort with stable sort (preserves original order for ties)
        List<List<String>> sorted = new ArrayList<>(products);

        sorted.sort((a, b) -> {
            String valA = a.get(sortParameter);
            String valB = b.get(sortParameter);

            int cmp;
            // index 0 = productName -> lexicographic
            // index 1 = starRating, index 2 = priceInCents -> numeric
            if (sortParameter == 0) {
                cmp = valA.compareTo(valB);
            } else {
                cmp = Long.compare(Long.parseLong(valA), Long.parseLong(valB));
            }

            return sortDirection == 1 ? -cmp : cmp;
        });

        // Pagination
        int start = pageNumber * productsPerPage;
        int end = Math.min(start + productsPerPage, sorted.size());

        List<String> result = new ArrayList<>();
        if (start >= sorted.size())
            return result;

        for (int i = start; i < end; i++) {
            result.add(sorted.get(i).get(0)); // productName
        }
        return result;
    }

    static class FastScanner {
        private final BufferedReader br;
        private StringTokenizer st;

        FastScanner(InputStream in) {
            br = new BufferedReader(new InputStreamReader(in));
        }

        String next() throws IOException {
            while (st == null || !st.hasMoreTokens()) {
                String line = br.readLine();
                if (line == null)
                    return null;
                st = new StringTokenizer(line);
            }
            return st.nextToken();
        }

        int nextInt() throws IOException {
            String s = next();
            return s == null ? 0 : Integer.parseInt(s);
        }
    }

    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner(System.in);

        int n = fs.nextInt(); // number of products
        int m = fs.nextInt(); // always 3 (columns)

        List<List<String>> products = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            List<String> product = new ArrayList<>();
            product.add(fs.next()); // productName
            product.add(fs.next()); // starRating
            product.add(fs.next()); // priceInCents
            products.add(product);
        }

        int sortParameter = fs.nextInt();
        int sortDirection = fs.nextInt();
        int productsPerPage = fs.nextInt();
        int pageNumber = fs.nextInt();

        List<String> result = fetchProductsToDisplay(
                products, sortParameter, sortDirection,
                productsPerPage, pageNumber);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        for (String name : result) {
            bw.write(name);
            bw.newLine();
        }
        bw.flush();
    }
}