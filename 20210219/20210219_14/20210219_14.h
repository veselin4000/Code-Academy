void input();

struct worker{
  int id;
  char fName[32];
  char mName[32];
  char lName[32];
  char pos[10];
  int workYears;
  double salary;
  struct worker *manager;
};
