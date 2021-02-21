#include <stdio.h>
#include <string.h>
struct tagDetail {
  unsigned int m_uAcadId;
  char m_szAcadName[BUFSIZ];
  char m_szAcadUrl[BUFSIZ];
};

struct tagCadet {
  unsigned int m_uCadetId;
  char m_CadetName[BUFSIZ];
  float m_uAverageRating;
  struct tagDetail m_detail;
};

int main(){
  struct tagCadet cadet = {
    1, "Ivan Ivanov", 5.52,{ 
      13, "Code Academy", "https://codeacademy.bg" 
    } 
  };
  struct tagCadet cadet2 = {
    2, "Petur Petrov", 4.59,{ 
      15, "Code Academy", "https://codeacademy.bg" 
    } 
  };
  printf("Cadet Id is: %d\n", cadet.m_uCadetId);
  printf("Name is: %s\n", cadet.m_CadetName);
  printf("Rating (2-6) is: %f\n", cadet.m_uAverageRating);
  printf("AcadId is: %d\n", cadet.m_detail.m_uAcadId);
  printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
  printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);
  printf(
        "\nCadet Id is: %d\n"
        "Name is: %s\n"
        "Rating (2-6) is: %f\n"
        "AcadId is: %d\n"
        "Name is: %s\n"
        "URL is: %s\n", cadet2.m_uCadetId, cadet2.m_CadetName,cadet2.m_uAverageRating,
                        cadet2.m_detail.m_uAcadId,cadet2.m_detail.m_szAcadName,
                        cadet2.m_detail.m_szAcadUrl);
  return 0;
}