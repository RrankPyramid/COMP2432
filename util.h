// 类型编号 1
typedef struct{
  int index = 0;
  char name[11];
 
  int manageTeam; // 管理的团队的团队的id 无则 = -1
  int asMember;   // 作为几个团队的member？ 限制最多是3个
  // 一个人最多参与 3 个团队，即 1 <= asManager + asMember <= 3
}person;

// 类型编号 2
typedef struct{
  int index = 0;
  char name[11];

  int manager; 	// 从职员库中索引定位
  int member1;	// 从职员库中索引定位
  int member2;	// 从职员库中索引定位
  int member3;	// 从职员库中索引定位
  // 不使用数组的原因：方便pipe传输

}team;

// 类型编号 3
typedef struct{
  int index = 0;
  char whichTeam[11];
  int manager; 	// 从职员库中索引定位
  int member1;	// 从职员库中索引定位
  int member2;	// 从职员库中索引定位
  int member3;	// 从职员库中索引定位

  int holdDay; 		// 0-17
  int startTime;  // 9-17
  int endTime;		// 10-18

  int priority;   // FCFS 中可无视

}event;

int myCalandar[20][10];
event eventArr[200];
person personArr[10] = {
    {0, "", -1, 0},
    {1, "Alan", -1, 0},
    {2, "Billy", -1, 0},
    {3, "Cathy", -1, 0},
    {4, "David", -1, 0},
    {5, "Eva", -1, 0},
    {6, "Fanny", -1, 0},
    {7, "Gary", -1, 0},
    {8, "Helen", -1, 0},
};
team teamArr[256];



