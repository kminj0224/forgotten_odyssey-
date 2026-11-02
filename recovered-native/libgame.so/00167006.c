/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167006  Symbol: updateAtlasValueAt */

/* cocos2d::CCTileMapAtlas::updateAtlasValueAt(cocos2d::_ccGridSize const&, cocos2d::_ccColor3B
   const&, unsigned int) */

void __thiscall
cocos2d::CCTileMapAtlas::updateAtlasValueAt
          (CCTileMapAtlas *this,_ccGridSize *param_1,_ccColor3B *param_2,uint param_3)

{
  undefined uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  
  iVar10 = *(int *)param_1;
  iVar7 = *(int *)(param_1 + 4);
  uVar1 = *(undefined *)param_2;
  uVar8 = *(undefined4 *)(this + 0x104);
  piVar2 = (int *)(**(code **)(**(int **)(this + 0x118) + 0x1c))();
  (**(code **)(*piVar2 + 0x18))();
  uVar3 = __floatunsisf();
  piVar2 = (int *)(**(code **)(**(int **)(this + 0x118) + 0x1c))();
  (**(code **)(*piVar2 + 0x1c))();
  uVar4 = __floatunsisf();
  iVar11 = *(int *)(this + 0x10c);
  uVar5 = __floatunsisf(iVar11);
  __aeabi_uidivmod(uVar1,uVar8);
  uVar6 = __floatunsisf(extraout_r1);
  uVar6 = __mulsf3(uVar6,uVar5);
  uVar6 = __divsf3(uVar6,uVar3);
  uVar3 = __divsf3(uVar5,uVar3);
  uVar3 = __addsf3(uVar6,uVar3);
  iVar9 = *(int *)(this + 0x110);
  uVar5 = __floatunsisf(iVar9);
  __udivsi3(uVar1,uVar8);
  uVar8 = __floatunsisf();
  uVar8 = __mulsf3(uVar8,uVar5);
  uVar8 = __divsf3(uVar8,uVar4);
  uVar4 = __divsf3(uVar5,uVar4);
  local_4c = __addsf3(uVar8,uVar4);
  local_68 = uVar6;
  local_64 = uVar8;
  local_50 = uVar6;
  local_38 = uVar3;
  local_34 = uVar8;
  local_20 = uVar3;
  local_1c = local_4c;
  uVar3 = __floatunsisf(iVar10 * iVar11);
  local_60 = uVar3;
  uVar4 = __floatunsisf(iVar7 * iVar9);
  local_58 = 0;
  local_5c = uVar4;
  uVar5 = __floatunsisf(iVar11 * (iVar10 + 1));
  local_28 = 0;
  local_78 = uVar3;
  local_30 = uVar5;
  local_2c = uVar4;
  local_74 = __floatunsisf(iVar9 * (iVar7 + 1));
  local_70 = 0;
  local_40 = 0;
  local_48 = uVar5;
  local_44 = local_74;
  CCTextureAtlas::updateQuad
            (*(CCTextureAtlas **)(this + 0x118),(_ccV3F_C4B_T2F_Quad *)&local_78,param_3);
  return;
}


