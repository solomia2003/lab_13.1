#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
    n = 2;
    a = 1;
    s = a;
    do {
        n++;
        dod(); // ������ ��������� ���������� �������
        s += a;
    } while (fabs(a) > e);
}