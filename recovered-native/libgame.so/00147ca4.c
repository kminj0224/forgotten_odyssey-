/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147ca4  Symbol: kerningAmountForFirst */

/* cocos2d::CCLabelBMFont::kerningAmountForFirst(unsigned short, unsigned short) */

undefined8 __thiscall
cocos2d::CCLabelBMFont::kerningAmountForFirst(CCLabelBMFont *this,ushort param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_14;
  uint uStack_10;
  
  uStack_10 = (uint)param_2;
  iVar5 = *(int *)(*(int *)(this + 0x124) + 0x30);
  if (iVar5 != 0) {
    piVar6 = *(int **)(iVar5 + 8);
    local_14._3_1_ = (byte)(param_1 >> 8);
    local_14._2_1_ = (byte)param_1;
    local_14._1_1_ = (byte)(param_2 >> 8);
    uVar2 = (param_2 & 0xff) + DAT_00147d58 + (uint)local_14._3_1_ * 0x1000000 +
            (uint)local_14._2_1_ * 0x10000 + (uint)local_14._1_1_ * 0x100 ^ DAT_00147d5c;
    uVar3 = DAT_00147d60 - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_00147d64 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    iVar5 = *(int *)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar6[1] - 1U) * 0xc + *piVar6);
    local_14 = CONCAT22(param_1,param_2);
    if (iVar5 != 0) {
      iVar5 = iVar5 - piVar6[5];
    }
    for (; iVar5 != 0; iVar5 = iVar5 - piVar6[5]) {
      if ((*(int *)(iVar5 + 0x20) == 4) &&
         (iVar1 = memcmp(*(void **)(iVar5 + 0x1c),&local_14,4), iVar1 == 0)) {
        iVar5 = *(int *)(iVar5 + 4);
        goto LAB_00147d56;
      }
      iVar5 = *(int *)(iVar5 + 0x18);
      if (iVar5 == 0) goto LAB_00147d56;
    }
    iVar5 = 0;
  }
LAB_00147d56:
  return CONCAT44(this,iVar5);
}


