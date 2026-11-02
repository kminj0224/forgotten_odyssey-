/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dcf8  Symbol: _base64Decode */

/* cocos2d::_base64Decode(unsigned char*, unsigned int, unsigned char*, unsigned int*) */

uint cocos2d::_base64Decode(uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar4 = *(int *)(DAT_0015dda4 + 0x15dd08);
  iVar6 = DAT_0015dda8 + 0x15dd10;
  iVar2 = 0x40;
  iVar1 = DAT_0015ddac + 0x15dd16;
  do {
    uVar7 = (uint)*(byte *)(iVar4 + iVar2);
    *(undefined *)(iVar6 + uVar7) = 1;
    *(char *)(iVar1 + uVar7) = (char)iVar2;
    bVar9 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar9);
  uVar5 = 0;
  uVar3 = 0;
  uVar8 = 0;
  iVar1 = 0;
  iVar4 = DAT_0015ddb0 + 0x15dd32;
  iVar2 = DAT_0015ddb4 + 0x15dd34;
  for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
    uVar8 = (uint)param_1[uVar7];
    if (uVar8 == 0x3d) goto LAB_0015dd70;
    if (*(char *)(iVar4 + uVar8) != '\0') {
      uVar3 = uVar3 + 1;
      iVar6 = iVar1 + (uint)*(byte *)(iVar2 + uVar8);
      iVar1 = iVar6 * 0x40;
      if (uVar3 == 4) {
        param_3[uVar5] = (uchar)((uint)iVar6 >> 0x10);
        param_3[uVar5 + 1] = (uchar)((uint)iVar6 >> 8);
        param_3[uVar5 + 2] = (uchar)iVar6;
        uVar3 = 0;
        uVar5 = uVar5 + 3;
        iVar1 = 0;
      }
    }
  }
  uVar7 = 0;
  if (uVar8 == 0x3d) {
LAB_0015dd70:
    if (uVar3 == 2) {
      param_3[uVar5] = (uchar)(iVar1 >> 10);
      uVar5 = uVar5 + 1;
    }
    else {
      if (uVar3 != 3) {
        uVar7 = -(uint)(uVar3 == 1) & uVar3;
        goto LAB_0015dd9a;
      }
      param_3[uVar5] = (uchar)((uint)iVar1 >> 0x10);
      param_3[uVar5 + 1] = (uchar)((uint)iVar1 >> 8);
      uVar5 = uVar5 + 2;
    }
    uVar7 = 0;
  }
LAB_0015dd9a:
  *param_4 = uVar5;
  return uVar7;
}


