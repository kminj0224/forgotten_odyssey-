/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146f9e  Symbol: updateAtlasValues */

/* cocos2d::CCLabelAtlas::updateAtlasValues() */

void __thiscall cocos2d::CCLabelAtlas::updateAtlasValues(CCLabelAtlas *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar9 = *(int *)(this + 0x134);
  uVar10 = *(uint *)(iVar9 + -0xc);
  piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0x1c))();
  (**(code **)(*piVar1 + 0x18))();
  uVar2 = __floatunsisf();
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  uVar3 = __floatunsisf();
  uVar13 = 0;
  while (uVar13 != uVar10) {
    uVar8 = *(undefined4 *)(this + 0x104);
    cVar12 = *(char *)(iVar9 + uVar13) - (char)this[0x138];
    iVar11 = *(int *)(this + 0x10c);
    uVar4 = __floatunsisf(iVar11);
    __aeabi_uidivmod(cVar12,uVar8);
    uVar5 = __floatunsisf(extraout_r1);
    uVar5 = __mulsf3(uVar5,uVar4);
    uVar5 = __divsf3(uVar5,uVar2);
    uVar4 = __divsf3(uVar4,uVar2);
    uVar4 = __addsf3(uVar5,uVar4);
    uVar6 = __floatunsisf(*(undefined4 *)(this + 0x110));
    __udivsi3(cVar12,uVar8);
    uVar8 = __floatunsisf();
    uVar8 = __mulsf3(uVar8,uVar6);
    uVar8 = __divsf3(uVar8,uVar3);
    uVar7 = __divsf3(uVar6,uVar3);
    local_4c = __addsf3(uVar8,uVar7);
    local_68 = uVar5;
    local_64 = uVar8;
    local_50 = uVar5;
    local_38 = uVar4;
    local_34 = uVar8;
    local_20 = uVar4;
    local_1c = local_4c;
    uVar4 = __floatunsisf(uVar13 * iVar11);
    local_5c = 0;
    local_58 = 0;
    local_60 = uVar4;
    local_48 = __floatunsisf((uVar13 + 1) * iVar11);
    local_2c = 0;
    local_28 = 0;
    local_70 = 0;
    local_40 = 0;
    local_78 = uVar4;
    local_74 = uVar6;
    local_44 = uVar6;
    local_30 = local_48;
    CCTextureAtlas::updateQuad
              (*(CCTextureAtlas **)(this + 0x118),(_ccV3F_C4B_T2F_Quad *)&local_78,uVar13);
    uVar13 = uVar13 + 1;
  }
  return;
}


