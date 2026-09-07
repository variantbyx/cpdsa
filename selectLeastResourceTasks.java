import java.io.*;
import java.util.*;

public class selectLeastResourceTasks {
    public static int selectLeastResourceTasks(List<Integer> resourceConsumption) {
        int n = resourceConsumption.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return resourceConsumption.get(0);

        int[] prev = new int[n];
        int[] next = new int[n];
        boolean[] alive = new boolean[n];

        for (int i = 0; i < n; i++) {
            prev[i] = i - 1;
            next[i] = (i + 1 < n) ? i + 1 : -1;
            alive[i] = true;
        }

        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> {
            if (a[0] != b[0])
                return Integer.compare(a[0], b[0]);
            return Integer.compare(a[1], b[1]);
        });

        for (int i = 0; i < n; i++) {
            pq.add(new int[] { resourceConsumption.get(i), i });
        }

        long total = 0;

        while (!pq.isEmpty()) {
            int[] cur = pq.poll();
            int idx = cur[1];

            if (!alive[idx])
                continue;

            total += cur[0];

            int left = prev[idx];
            int right = next[idx];

            // remove current
            alive[idx] = false;
            if (left != -1)
                next[left] = right;
            if (right != -1)
                prev[right] = left;

            // remove left neighbor
            if (left != -1 && alive[left]) {
                int ll = prev[left];
                int lr = next[left];
                alive[left] = false;
                if (ll != -1)
                    next[ll] = lr;
                if (lr != -1)
                    prev[lr] = ll;
            }

            // remove right neighbor
            if (right != -1 && alive[right]) {
                int rl = prev[right];
                int rr = next[right];
                alive[right] = false;
                if (rl != -1)
                    next[rl] = rr;
                if (rr != -1)
                    prev[rr] = rl;
            }
        }

        return (int) total;
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

        int n = fs.nextInt();
        List<Integer> resourceConsumption = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            resourceConsumption.add(fs.nextInt());
        }

        int ans = selectLeastResourceTasks(resourceConsumption);

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(String.valueOf(ans));
        bw.newLine();
        bw.flush();
    }
}
 