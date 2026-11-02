/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ece40  Symbol: FUN_001ece40 */

uint FUN_001ece40(int *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  sVar3 = strlen(param_2);
  uVar6 = *(uint *)(*param_1 + -0xc);
  if (sVar3 == 0) {
    if (uVar6 < param_3) {
      param_3 = 0xffffffff;
    }
    return param_3;
  }
  if ((sVar3 <= uVar6) && (param_3 <= uVar6 - sVar3)) {
    cVar1 = *param_2;
    pcVar5 = (char *)(*param_1 + param_3);
    do {
      uVar4 = param_3 + 1;
      if ((cVar1 == *pcVar5) && (iVar2 = memcmp(pcVar5 + 1,param_2 + 1,sVar3 - 1), iVar2 == 0)) {
        return param_3;
      }
      pcVar5 = pcVar5 + 1;
      param_3 = uVar4;
    } while (uVar4 <= uVar6 - sVar3);
  }
  return 0xffffffff;
}


