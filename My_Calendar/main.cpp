/**
 *该程序主要是使用for循环打印日历功能
 *时间：2019-5-12
 *作者：178me
 *扩展：让用户自定义选择查看月份	1、思路一：可以把每个月开始的天数记下来，用户选择了之后就是从那天开始---缺点：比较麻烦，费人工
 **/
//--------------------------//
#include <iostream>
using namespace std;
/**
 *暂时打印2019年的日历
 **/
int main() {
	int day;					//用来记录每月的天数
	int start_day_week = 2;		//2019的第一天是星期二
	/*
	 *外层循环控制月份,内层循环控制天数
	 *外层设立三个条件，分别对应大月、2月、小月
	 *内层设立换行的条件
	 */
	for (int i = 1; i <= 12; i++) {
	//	cout << "请输入你想查看的(2019)月份：";
	//	cin >> i;
	//	printf("一\t二\t三\t四\t五\t六\t日\n");
		//输出每个月的固定格式以及判断大小月
		cout << "\t\t" << i << "\t\t月" << endl;
		cout << "日\t一\t二\t三\t四\t五\t六" << endl;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 10 || i == 12) {
			day = 31;
		}
		else if (i == 2) {
			day = 28;
		}
		else {
			day = 30;
		}
		//------------------------------//
		//判断每个月开始的天数要输出几个制表位
		if (start_day_week != 7) {
			for (int k = 0; k < start_day_week; k++) {
				cout << '\t';
			}
		}
		//------------------------------//
		//输出每个月的天数
		for (int j = 1; j <= day;j++) {
			cout << j;
			//判断到星期六换行
			if(start_day_week % 6 == 0){
				cout << endl;
			}
			else {
				cout << '\t';
			}
			//到星期天重置
			start_day_week++;
			if (start_day_week == 8) {
				start_day_week = 1;
			}
		}
		//-------------------------------//
		cout << endl;
		cout << endl;
	}
}