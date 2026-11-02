/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bd98  Symbol: Reinforcement_Item_Text_Draw */

/* New_Notice::Reinforcement_Item_Text_Draw(void*) */

void __thiscall New_Notice::Reinforcement_Item_Text_Draw(New_Notice *this,void *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  CCTexture2D *pCVar4;
  int *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  undefined8 uVar14;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined local_e8;
  undefined local_e7;
  undefined local_e6;
  CCPoint aCStack_e4 [8];
  CCPoint aCStack_dc [8];
  CCPoint aCStack_d4 [8];
  CCPoint aCStack_cc [8];
  CCPoint aCStack_c4 [8];
  CCPoint aCStack_bc [8];
  CCPoint aCStack_b4 [8];
  CCPoint aCStack_ac [8];
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  CCPoint aCStack_94 [8];
  CCPoint aCStack_8c [8];
  char acStack_84 [52];
  char acStack_50 [52];
  int local_1c;
  
  piVar9 = *(int **)(DAT_0011bffc + 0x11bda4);
                    /* WARNING: Load size is inaccurate */
  iVar7 = *param_1;
  local_1c = *piVar9;
  iVar8 = *(int *)((int)param_1 + 8);
  if (iVar7 != 0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011c000 + 0x11bdc0));
    iVar10 = *(int *)((int)param_1 + 4);
    if (iVar10 == 0) {
      pcVar2 = (char *)(DAT_0011c004 + 0x11bdd0);
    }
    else if (iVar10 == 1) {
      pcVar2 = (char *)(DAT_0011c008 + 0x11bdda);
    }
    else if (iVar10 == 2) {
      pcVar2 = (char *)(DAT_0011c00c + 0x11bde4);
    }
    else {
      pcVar2 = (char *)(DAT_0011c010 + 0x11bdea);
    }
    piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar2);
    pcVar11 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_e4,extraout_s0,extraout_s1);
    uVar14 = (*pcVar11)(piVar3,aCStack_e4);
    pcVar11 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_dc,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar3,aCStack_dc);
    (**(code **)(*(int *)this + 0xcc))(this,piVar3,4,4);
    iVar10 = *(int *)(DAT_0011c01c + 0x11be32);
    sprintf(acStack_84,(char *)(DAT_0011c020 + 0x11be38),*(undefined4 *)(iVar10 + iVar7 * 0xc + 4));
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_84);
    pcVar11 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_d4,extraout_s0_00,extraout_s1_00);
    (*pcVar11)(piVar3,aCStack_d4);
    fVar13 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar3,5,5);
    if (iVar8 != 0) {
      pCVar4 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4);
      (**(code **)(*piVar3 + 0xcc))(piVar3,piVar1,0,0);
      Draw_Number::node();
      this_00 = (int *)Draw_Number::node();
      (**(code **)(*piVar3 + 0xcc))(piVar3,this_00,1,1);
      uVar14 = Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
      pcVar11 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_cc,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      uVar14 = (*pcVar11)(piVar1,aCStack_cc);
      pcVar11 = *(code **)(*this_00 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_c4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      (*pcVar11)(this_00,aCStack_c4);
      fVar13 = (float)Draw_Number::SetNumber((Draw_Number *)this_00,iVar8,0);
    }
    piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (*(char **)(iVar10 + iVar7 * 0xc),(char *)(DAT_0011c038 + 0x11bf06),
                               fVar13);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_bc,extraout_s0_01,extraout_s1_01);
    (*pcVar11)(piVar1,aCStack_bc);
    pcVar11 = *(code **)(*piVar1 + 0xf4);
    KG_getItemClassColor(*(int *)((int)param_1 + 4));
    uVar14 = (*pcVar11)(piVar1);
    pcVar11 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_b4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_b4);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,0xc,0xc);
    if (iVar7 - 0x33U < 0x1e) {
      pcVar2 = (char *)(DAT_0011c048 + 0x11bf7c);
    }
    else {
      pcVar2 = (char *)(DAT_0011c04c + 0x11bf82);
    }
    strcpy(acStack_50,pcVar2);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(acStack_50);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_ac,extraout_s0_02,extraout_s1_02);
    (*pcVar11)(piVar1,aCStack_ac);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,6,6);
    iVar7 = *(int *)((int)param_1 + 0xc);
                    /* WARNING: Load size is inaccurate */
    iVar8 = *(int *)(DAT_0011c058 + 0x11bfc0);
    if (*param_1 - 0x33U < 0x1e) {
      uVar5 = __floatsisf(*(undefined4 *)((int)param_1 + 0x10));
      iVar10 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),param_1,0);
      uVar6 = __addsf3(*(undefined4 *)(iVar8 + iVar10 * 4),0x3f800000);
      __mulsf3(uVar5,uVar6);
      iVar8 = __fixsfsi();
      iVar8 = iVar8 - *(int *)((int)param_1 + 0x10);
    }
    else {
      uVar5 = __floatsisf(*(undefined4 *)((int)param_1 + 0x10));
      iVar10 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),param_1,0);
      uVar6 = __addsf3(*(undefined4 *)(iVar8 + iVar10 * 4),0x3f800000);
      __mulsf3(uVar5,uVar6);
      iVar8 = __fixsfsi();
      iVar8 = iVar8 - *(int *)((int)param_1 + 0x10);
    }
    piVar1 = (int *)N_Draw_Number::node();
    N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar1,3);
    uVar14 = N_Draw_Number::SetNumber((N_Draw_Number *)piVar1,iVar7,2);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_a4);
    (**(code **)(*(int *)this + 200))(this,piVar1,0x10);
    piVar1 = (int *)N_Draw_Number::node();
    N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar1,3);
    uVar14 = N_Draw_Number::SetNumber((N_Draw_Number *)piVar1,iVar7 + iVar8,0);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_9c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_9c);
    (**(code **)(*(int *)this + 200))(this,piVar1,0x11);
    iVar7 = Get_Item_Upgrade_Count();
    iVar8 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),param_1,0);
    iVar12 = *(int *)(DAT_0011c1e0 + 0x11c11c);
    iVar8 = *(int *)(iVar12 + iVar8 * 0xc + 8);
    iVar10 = KG_Get_Item_Rinforcement_Lv(*(int *)(this + 0x118),param_1,1);
    iVar8 = iVar8 * *(int *)(iVar12 + iVar10 * 0xc + 4);
    piVar1 = (int *)N_Draw_Number::node();
    N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar1,8);
    uVar14 = N_Draw_Number::SetNumber((N_Draw_Number *)piVar1,iVar8,2);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_94,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_94);
    (**(code **)(*(int *)this + 200))(this,piVar1,0x12);
    piVar1 = (int *)N_Draw_Number::node();
    N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar1,8);
    uVar14 = N_Draw_Number::SetNumber((N_Draw_Number *)piVar1,iVar7,2);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_8c,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_8c);
    (**(code **)(*(int *)this + 200))(this,piVar1,0x13);
    if (iVar7 < iVar8) {
      local_e8 = 0xff;
      local_e7 = 0;
      local_e6 = 0;
      N_Draw_Number::SetColor((N_Draw_Number *)piVar1,(_ccColor3B *)&local_e8);
    }
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


