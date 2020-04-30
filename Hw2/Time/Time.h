class Time {
public:
	Time();
	Time(int, int, int);
	void setTime(int, int, int);
	void printUniversal();
	void printStandard();
	int& setHour(int);
	int hour;
	int minute;
	int second;
};