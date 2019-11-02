577A - Multiplication Table Codeforces Problem Solution & Logic
http://codeforces.com/problemset/problem/577/A

খুবই সহজ একটা সমস্যা, বাট-দেখে একটু কঠিন মনে হলেও, একটু চিন্তা করলেই কিন্তু জিনিসটা পরিষ্কার হয়ে যাবে, যাই হোক তোমায় দুইটা ভ্যালু দেয়া থাকবে।
তোমায় একটা টেবিল এ  Row & Column  এমনভাবে সাজাতে হবে যেনো - প্রতিটা ইনডেক্স এর মান হবে, ওই ইনডেক্স এর কলাম ও রো নাম্বার এর গুণফল (i * j)।
যেমন ৬ ও ১২ এর ক্ষেত্রে টেবিলটা কেমন হবে ?? দেখে নেই ---

				1	2	3	4	5	6
				2	4	6	8	10	12
				3	6	9	12	15	18
				4	8	12	16	20	24
				5	10	15	20	25	30
				6	12	18	24	30	36

এখানে, কিভাবে সংখ্যাগুলো বসলো?? চলো - ২ নাম্বার সারি'র সংখ্যাগুলি নিয়ে আলোচনা করে ফেলি। ধরে নেই যে- column সংখ্যা  i  দিয়ে ও row সংখ্যা  j   দিয়ে দিয়ে প্রকাশ করি । তাহলে ,

   2                4              6                     8                   10                        12
i=1 & j=2        i=2 &j=2        i=3&j=2              i=4 & j=2           i=5 & j=2                 i=6 & j=2
i x j=2          i x j= 4        i x j= 6             i x j= 8            i x j= 10                 i x j = 12

আসলে ঠিক এইভাবেই পুরো টেবিল সাজানো হয়েছে। এখন, সমাধান করার সময় আবার ভেবো না যে, এই টেবিল'তা প্রথমে জেনারেট করে, তারপর তুমি-দেখবে ১২ কতোবার আছে ?? 
যতোবার আছে , সেই সংখ্যা'টা প্রিন্ট করবে। এখানে, একটু মাথা খাটালেই বুঝবে যে -- আমাদের পুরো টেবিল না সাজিয়েই বুঝতে পারবো যে - ১২ কতোবার জেনারেট  হয়েছে  । ।

এখানে, তোমায়  n  এর মান দেয়া আছে  ৬  - তাহলে , আমরা যদি -- ১২ কতোবার আছে ?? সেটা বের করতে চাই, তাহলে আমরা 
যদি  ১ থেকে ৬ অবদি সবগুলো সংখ্যা দিয়ে চেক করে দেখি কোনটা কোনটা দিয়ে ১২ নিঃশেষে বিভাজ্য যায় ও ভাগফল ৬ এর কম হয় , তাহলেই কিন্তু , মোট ১২ এর সংখ্যা পেয়ে যাবো। 
কারণ , আমাদের যেহেতু -- n x n ম্যাট্রিক্স এর টেবিল বানাবো,  সুতরাং, কলাম ও রো এর সংখ্যা ৬ ছারাবে না তাই, ১ থেকে  n পর্যন্ত থাকা  ইনডেক্স দিয়ে ১২ কে  ভাগ করলে,
ভাগফল অবশ্যই ৬ এর কম হবে । । যাই হোক , নিজে নিজে একটু চিন্তা করলে ক্লিয়ার হবে ।  চলো কোড দেখে আসি এইবার ..................

#include <iostream>
int main() {
	int n, x, count = 0;
	scanf("%d %d", &n, &x);
	for (int i = 1; i <= n; i++) {
		if (x % i == 0 && x / i <= n) count++;
	}
	printf("%d\n", count);
}
