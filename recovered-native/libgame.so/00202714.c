/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202714  Symbol: FUN_00202714 */

void FUN_00202714(int param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _Unwind_GetRegionStart();
  }
  *param_3 = uVar3;
  pcVar7 = param_2 + 1;
  cVar1 = *param_2;
  if (cVar1 == -1) {
    param_3[1] = uVar3;
  }
  else {
    uVar3 = FUN_0020269c(cVar1,param_1);
    pcVar7 = (char *)FUN_00202540(cVar1,uVar3,pcVar7,param_3 + 1,param_4);
  }
  pbVar8 = (byte *)(pcVar7 + 1);
  cVar1 = *pcVar7;
  *(char *)(param_3 + 5) = cVar1;
  if (cVar1 == -1) {
    param_3[3] = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    pbVar5 = pbVar8;
    do {
      pbVar8 = pbVar5 + 1;
      bVar2 = *pbVar5;
      uVar4 = uVar4 | (bVar2 & 0x7f) << (uVar6 & 0xff);
      uVar6 = uVar6 + 7;
      pbVar5 = pbVar8;
    } while ((bVar2 & 0x80) != 0);
    param_3[3] = pbVar8 + uVar4;
  }
  uVar4 = 0;
  *(byte *)((int)param_3 + 0x15) = *pbVar8;
  uVar6 = 0;
  pbVar8 = pbVar8 + 1;
  do {
    pbVar5 = pbVar8 + 1;
    bVar2 = *pbVar8;
    uVar4 = uVar4 | (bVar2 & 0x7f) << (uVar6 & 0xff);
    uVar6 = uVar6 + 7;
    pbVar8 = pbVar5;
  } while ((bVar2 & 0x80) != 0);
  param_3[4] = pbVar5 + uVar4;
  return;
}


