/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cfd0  Symbol: Set_Money */

/* New_Notice::Set_Money(int) */

void __thiscall New_Notice::Set_Money(New_Notice *this,int param_1)

{
  int iVar1;
  CCNode *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  N_Draw_Number *this_01;
  int iVar5;
  char *pcVar6;
  _ccColor3B *p_Var7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar12;
  _ccColor3B local_70;
  _ccColor3B _Stack_6c;
  CCPoint local_68;
  int local_64;
  CCPoint local_60;
  CCPoint local_5c;
  int local_58;
  int local_54;
  CCPoint local_50;
  CCPoint local_4c;
  int local_48;
  int local_44;
  CCPoint local_40;
  CCPoint local_3c;
  int local_38;
  int local_34;
  char acStack_30 [20];
  int local_1c;
  
  iVar11 = DAT_0011d1ac + 0x11cfde;
  piVar9 = *(int **)(iVar11 + DAT_0011d1b0);
  local_1c = *piVar9;
  iVar1 = Get_Money(this,param_1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,extraout_s0,extraout_s1);
  vDrawMoney((CCNode *)this,iVar1,local_68,local_64,1,2,0xe);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(this_00,0);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  iVar4 = __fixsfsi(*puVar3);
  memset(acStack_30,0,0x14);
  sprintf(acStack_30,(char *)(DAT_0011d1bc + 0x11d040),iVar1);
  iVar10 = 0;
  iVar8 = 9;
  iVar5 = 0;
  do {
    if (iVar10 - iVar5 == (iVar5 + 1) * 3) {
      if (acStack_30[iVar8] != '\0') {
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 1;
      }
    }
    else {
      iVar10 = iVar10 + (uint)(acStack_30[iVar8] != '\0');
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  if ((uint)param_1 < 2) {
    uVar12 = __floatsisf(0x16a - iVar4 * iVar10);
    uVar12 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)&local_60,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20))
    ;
    vDrawFrame((CCNode *)this,(char *)(DAT_0011d1c0 + 0x11d0b2),local_60,local_5c,local_58,local_54)
    ;
    if ((param_1 != 1) ||
       (iVar1 <= *(int *)(**(int **)(iVar11 + DAT_0011d1cc) +
                          (**(int **)(iVar11 + DAT_0011d1d4) + DAT_0011d1d0) * 4 + 4)))
    goto LAB_0011d198;
    this_01 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
    p_Var7 = &local_70;
  }
  else {
    iVar5 = 0x16a - iVar4 * iVar10;
    if (*(int *)(this + 0x118) - 7U < 2) {
      uVar12 = __floatsisf(iVar5);
      uVar12 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)&local_50,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pcVar6 = (char *)(DAT_0011d1c4 + 0x11d102);
    }
    else {
      uVar12 = __floatsisf(iVar5);
      uVar12 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)&local_40,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pcVar6 = (char *)(DAT_0011d1c8 + 0x11d136);
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      local_44 = local_34;
    }
    vDrawFrame((CCNode *)this,pcVar6,local_50,local_4c,local_48,local_44);
    if ((param_1 != 2) || (iVar1 <= *(int *)(**(int **)(iVar11 + DAT_0011d1cc) + DAT_0011d1d8)))
    goto LAB_0011d198;
    this_01 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
    p_Var7 = &_Stack_6c;
  }
  *(undefined *)p_Var7 = 0xff;
  *(undefined *)((int)p_Var7 + 1) = 0x7f;
  *(undefined *)((int)p_Var7 + 2) = 0x7f;
  N_Draw_Number::SetColor(this_01,p_Var7);
LAB_0011d198:
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


