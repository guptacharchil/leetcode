class Fibonacci {
    public int fib(int n) {
        int f[]=new int[10];
        f[0]=0;
        f[1]=1;
        for(int i=2;i<n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n-1];
    }
    public static void main(String arg[])
    {
        int n=10;
        Fibonacci a=new Fibonacci();
    System.out.println(a.fib(n));
    }
}