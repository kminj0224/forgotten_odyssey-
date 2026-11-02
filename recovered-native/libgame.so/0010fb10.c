/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010fb10  Symbol: FileLode_SkillIcon */

/* New_UI::FileLode_SkillIcon(int) */

void __thiscall New_UI::FileLode_SkillIcon(New_UI *this,int param_1)

{
  int *this_00;
  int *piVar1;
  CCNode *pCVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  char *__format;
  int iVar7;
  int iVar8;
  float extraout_s0;
  float extraout_s0_00;
  float fVar9;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float fVar11;
  undefined8 uVar10;
  float extraout_s1_01;
  CCPoint local_108;
  int local_104;
  CCPoint local_100;
  int local_fc;
  CCPoint local_f8;
  int local_f4;
  CCPoint local_f0;
  int local_ec;
  CCPoint aCStack_e8 [8];
  char acStack_e0 [50];
  char acStack_ae [50];
  char acStack_7c [50];
  char acStack_4a [54];
  
  iVar8 = DAT_0010fdcc;
  memset(acStack_e0,0,200);
  iVar8 = iVar8 + 0x10fb2a;
  if (param_1 == 1) {
    puVar5 = *(undefined4 **)(iVar8 + DAT_0010fdd0);
    __format = (char *)(DAT_0010fdd4 + 0x10fb38);
    sprintf(acStack_e0,__format,*puVar5);
    sprintf(acStack_ae,__format,puVar5[4]);
    sprintf(acStack_7c,__format,puVar5[8]);
    uVar3 = puVar5[0xc];
  }
  else if (param_1 == 2) {
    iVar7 = *(int *)(iVar8 + DAT_0010fdd0);
    __format = (char *)(DAT_0010fdd8 + 0x10fb6a);
    sprintf(acStack_e0,__format,*(undefined4 *)(iVar7 + 0xb0));
    sprintf(acStack_ae,__format,*(undefined4 *)(iVar7 + 0xc0));
    sprintf(acStack_7c,__format,*(undefined4 *)(iVar7 + 0xd0));
    uVar3 = *(undefined4 *)(iVar7 + 0xe0);
  }
  else {
    if (param_1 == 4) {
      iVar4 = *(int *)(iVar8 + DAT_0010fdd0);
      __format = (char *)(DAT_0010fddc + 0x10fbac);
      sprintf(acStack_e0,__format,*(undefined4 *)(iVar4 + 0x210));
      sprintf(acStack_ae,__format,*(undefined4 *)(iVar4 + 0x220));
      sprintf(acStack_7c,__format,*(undefined4 *)(iVar4 + 0x230));
      iVar7 = 0x90;
    }
    else {
      if (param_1 == 3) {
        iVar7 = *(int *)(iVar8 + DAT_0010fdd0);
        __format = (char *)(DAT_0010fde0 + 0x10fbe8);
        sprintf(acStack_e0,__format,*(undefined4 *)(iVar7 + 0x160));
        sprintf(acStack_ae,__format,*(undefined4 *)(iVar7 + 0x170));
        sprintf(acStack_7c,__format,*(undefined4 *)(iVar7 + 0x180));
        uVar3 = *(undefined4 *)(iVar7 + 400);
        goto LAB_0010fc60;
      }
      fVar9 = extraout_s0;
      fVar11 = extraout_s1;
      if (param_1 != 5) goto LAB_0010fc64;
      iVar4 = *(int *)(iVar8 + DAT_0010fdd0);
      __format = (char *)(DAT_0010fde4 + 0x10fc2e);
      sprintf(acStack_e0,__format,*(undefined4 *)(iVar4 + 0x2c0));
      sprintf(acStack_ae,__format,*(undefined4 *)(iVar4 + 0x2d0));
      sprintf(acStack_7c,__format,*(undefined4 *)(iVar4 + 0x2e0));
      iVar7 = 0xbc;
    }
    uVar3 = *(undefined4 *)(iVar4 + iVar7 * 4);
  }
LAB_0010fc60:
  sprintf(acStack_4a,__format,uVar3);
  fVar9 = extraout_s0_00;
  fVar11 = extraout_s1_00;
LAB_0010fc64:
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_108,fVar9,fVar11);
  iVar7 = 2;
  uVar10 = vDrawImage((CCNode *)this,acStack_e0,local_108,local_104,2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_100,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawImage((CCNode *)this,acStack_ae,local_100,local_fc,3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_f8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = vDrawImage((CCNode *)this,acStack_7c,local_f8,local_f4,4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_f0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  vDrawImage((CCNode *)this,acStack_4a,local_f0,local_ec,5);
  Skill_Icon_Visivle(this,param_1);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          this_00 = (int *)Draw_Number::node();
          pcVar6 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_01,extraout_s1_01);
          (*pcVar6)(this_00,aCStack_e8);
          (**(code **)(*this_00 + 0x80))(this_00,*(undefined4 *)(iVar8 + DAT_0010fe00));
          piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          (**(code **)(*piVar1 + 0xcc))(piVar1,this_00,0,0);
          Draw_Number::SetNumberFont((Draw_Number *)this_00,0xc);
          iVar4 = (*(char *)(**(int **)(iVar8 + DAT_0010fe04) + **(int **)(iVar8 + DAT_0010fe0c) +
                             DAT_0010fe10 + 4) + -1) * 0xb;
          if (iVar7 != 2) break;
          iVar7 = Get_Mana((int)*(char *)(*(int *)(iVar8 + DAT_0010fe08) + iVar4));
          Draw_Number::SetNumber((Draw_Number *)this_00,iVar7,2);
          iVar7 = 3;
        }
        iVar4 = *(int *)(iVar8 + DAT_0010fe08) + iVar4;
        if (iVar7 != 3) break;
        iVar7 = Get_Mana((int)*(char *)(iVar4 + 1));
        Draw_Number::SetNumber((Draw_Number *)this_00,iVar7,2);
        iVar7 = 4;
      }
      if (iVar7 != 4) break;
      iVar7 = Get_Mana((int)*(char *)(iVar4 + 2));
      Draw_Number::SetNumber((Draw_Number *)this_00,iVar7,2);
      iVar7 = 5;
    }
    iVar4 = Get_Mana((int)*(char *)(iVar4 + 3));
    iVar7 = iVar7 + 1;
    Draw_Number::SetNumber((Draw_Number *)this_00,iVar4,2);
  } while (iVar7 != 6);
  if (param_1 - 1U < 2) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    Hero_Skill_Button_Effect(this,pCVar2);
  }
  return;
}


