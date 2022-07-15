/** 
 * 假设地球上的新生资源按恒定速度增长。照此测算，
 * 地球上现有资源加上新生资源可供x亿人生活a年，或供y亿人生活b年。
 * 为了能够实现可持续发展，避免资源枯竭，地球最多能够养活多少亿人？
 */
 #include <cstdio>

 using namespace std;

 int main()
 {
     int x, a, y, b;
     scanf("%d %d %d %d", &x, &a, &y, &b);
     float z = (x * a - y * b) / float(a - b);
     printf("%.2f", z);
     return 0;
 }