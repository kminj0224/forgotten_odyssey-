/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012d388  Symbol: Draw_Slot */

/* MainMenuLayer::Draw_Slot(cocos2d::CCNode*, bool, int) */

void __thiscall
MainMenuLayer::Draw_Slot(MainMenuLayer *this,CCNode *param_1,bool param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar14;
  float extraout_s0_07;
  undefined8 uVar15;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar16;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  int local_cc;
  int local_c8;
  int local_c4;
  CCPoint aCStack_b4 [8];
  CCPoint aCStack_ac [8];
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  CCPoint aCStack_94 [8];
  CCPoint aCStack_8c [8];
  CCPoint aCStack_84 [8];
  CCPoint aCStack_7c [8];
  CCPoint aCStack_74 [8];
  CCPoint aCStack_6c [8];
  CCPoint aCStack_64 [8];
  CCPoint aCStack_5c [8];
  CCPoint aCStack_54 [8];
  _func_void_CCObject_ptr *local_4c;
  undefined4 local_48;
  char acStack_44 [40];
  int local_1c;
  
  piVar9 = *(int **)(DAT_0012d6f0 + 0x12d396);
  local_1c = *piVar9;
  if (!param_2) {
    memset(acStack_44,0,0x28);
    sprintf(acStack_44,(char *)(DAT_0012d6f4 + 0x12d3ba),param_3);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_44);
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    __mulsf3(*puVar3,0x3f000000);
    iVar4 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar15 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_b4,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar10)(piVar2,aCStack_b4);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_3 + 8);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d6f8 + 0x12d41a));
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar15 = __mulsf3(*puVar3,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_ac,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar10)(piVar2,aCStack_ac);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x11,0x11);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d700 + 0x12d45a));
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a4,extraout_s0,extraout_s1);
    (*pcVar10)(piVar2,aCStack_a4);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x13,0x13);
    pcVar10 = *(code **)(*piVar2 + 0x6c);
    goto LAB_0012d936;
  }
  memset(acStack_44,0,0x28);
  sprintf(acStack_44,(char *)(DAT_0012d70c + 0x12d4a0),param_3);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_44);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  __mulsf3(*puVar3,0x3f000000);
  iVar4 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar12 = *(undefined4 *)(iVar4 + 4);
  iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar15 = __subsf3(uVar12,*(undefined4 *)(iVar4 + 4));
  cocos2d::CCPoint::CCPoint(aCStack_9c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  (*pcVar10)(piVar2,aCStack_9c);
  iVar4 = param_3 + -1;
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_3 + 8);
  piVar2 = *(int **)(DAT_0012d710 + 0x12d512);
  cVar1 = *(char *)(*piVar2 + iVar4 + DAT_0012d714 + 4);
  if (cVar1 == '\x01') {
    pcVar5 = (char *)(DAT_0012d718 + 0x12d528);
  }
  else if (cVar1 == '\x02') {
    pcVar5 = (char *)(DAT_0012d71c + 0x12d532);
  }
  else if (cVar1 == '\x04') {
    pcVar5 = (char *)(DAT_0012d720 + 0x12d542);
  }
  else if (cVar1 == '\x03') {
    pcVar5 = (char *)(DAT_0012d724 + 0x12d54c);
  }
  else if (cVar1 == '\x05') {
    pcVar5 = (char *)(DAT_0012d728 + 0x12d556);
  }
  else if (cVar1 == '\x06') {
    pcVar5 = (char *)(DAT_0012d72c + 0x12d560);
  }
  else if (cVar1 == '\a') {
    pcVar5 = (char *)(DAT_0012d730 + 0x12d56a);
  }
  else {
    if (cVar1 != '\b') {
      piVar6 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d738 + 0x12d57a));
      *(undefined *)(*piVar2 + iVar4 + DAT_0012d714 + 4) = 1;
      fVar14 = extraout_s0_01;
      fVar16 = extraout_s1_01;
      goto LAB_0012d58c;
    }
    pcVar5 = (char *)(DAT_0012d734 + 0x12d574);
  }
  piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar5);
  fVar14 = extraout_s0_00;
  fVar16 = extraout_s1_00;
LAB_0012d58c:
  pcVar10 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_94,fVar14,fVar16);
  (*pcVar10)(piVar6,aCStack_94);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar6,10,10);
  piVar6 = (int *)N_Draw_Number::node();
  pcVar10 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_8c,extraout_s0_02,extraout_s1_02);
  (*pcVar10)(piVar6,aCStack_8c);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar6,0xb,0xb);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar6,6);
  N_Draw_Number::SetNumber
            ((N_Draw_Number *)piVar6,
             *(int *)(*piVar2 + (iVar4 * 9 + (int)*(char *)(*piVar2 + iVar4 + DAT_0012d714 + 4) +
                                DAT_0012d74c) * 4 + 4),1);
  piVar6 = (int *)N_Draw_Number::node();
  pcVar10 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_84,extraout_s0_03,extraout_s1_03);
  (*pcVar10)(piVar6,aCStack_84);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar6,0xc,0xc);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar6,2);
  N_Draw_Number::SetMoney
            ((N_Draw_Number *)piVar6,*(int *)(*piVar2 + (iVar4 + DAT_0012d758) * 4 + 4),0);
  local_cc = 0;
  local_c4 = 0;
  local_c8 = 0;
  uVar15 = *(undefined8 *)(*piVar2 + (iVar4 + DAT_0012d75c) * 8);
  do {
    uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar12 = (undefined4)uVar15;
    iVar7 = __aeabi_dcmpgt(uVar12,uVar13,DAT_0012d6d8,DAT_0012d6dc);
    if (iVar7 == 0) {
      iVar7 = __aeabi_dcmpgt(uVar12,uVar13,DAT_0012d6e0,DAT_0012d6e4);
      if (iVar7 == 0) {
        iVar7 = __aeabi_dcmpgt(uVar12,uVar13,DAT_0012d6e8,DAT_0012d6ec);
        if (iVar7 == 0) break;
        local_cc = local_cc + 1;
        uVar8 = DAT_0012d6e8;
        uVar11 = DAT_0012d6ec;
      }
      else {
        local_c4 = local_c4 + 1;
        uVar8 = DAT_0012d6e0;
        uVar11 = DAT_0012d6e4;
      }
    }
    else {
      local_c8 = local_c8 + 1;
      uVar8 = DAT_0012d6d8;
      uVar11 = DAT_0012d6dc;
    }
    uVar15 = __subdf3(uVar12,uVar13,uVar8,uVar11);
  } while( true );
  piVar2 = (int *)N_Draw_Number::node();
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_7c,extraout_s0_04,extraout_s1_04);
  (*pcVar10)(piVar2,aCStack_7c);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0xe,0xe);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar2,3);
  N_Draw_Number::SetNumber((N_Draw_Number *)piVar2,local_c8,2);
  piVar2 = (int *)N_Draw_Number::node();
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_74,extraout_s0_05,extraout_s1_05);
  (*pcVar10)(piVar2,aCStack_74);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0xf,0xf);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar2,3);
  N_Draw_Number::SetNumber((N_Draw_Number *)piVar2,local_c4,2);
  piVar2 = (int *)N_Draw_Number::node();
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_6c,extraout_s0_06,extraout_s1_06);
  (*pcVar10)(piVar2,aCStack_6c);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x10,0x10);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)piVar2,3);
  N_Draw_Number::SetNumber((N_Draw_Number *)piVar2,local_cc,2);
  piVar2 = (int *)cocos2d::CCMenu::menuWithItems((CCMenuItem *)0x0);
  local_4c = *(_func_void_CCObject_ptr **)(DAT_0012d95c + 0x12d824);
  local_48 = 0;
  uVar12 = 0;
  piVar6 = (int *)cocos2d::CCMenuItemImage::itemFromNormalImage
                            ((char *)(DAT_0012d960 + 0x12d828),(char *)(DAT_0012d960 + 0x12d828),
                             (CCObject *)this,local_4c);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar6,iVar4,iVar4,uVar12);
  (**(code **)(*(int *)param_1 + 200))(param_1,piVar2,0x12);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar13 = *puVar3;
  puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar12 = __mulsf3(*puVar3,0x3f000000);
  __subsf3(uVar13,uVar12);
  iVar4 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar13 = *(undefined4 *)(iVar4 + 4);
  iVar4 = (**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar12 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar15 = __subsf3(uVar13,uVar12);
  cocos2d::CCPoint::CCPoint(aCStack_64,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  fVar14 = (float)(*pcVar10)(piVar2,aCStack_64);
  cocos2d::CCNode::setScale((CCNode *)piVar6,fVar14);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d968 + 0x12d8c6));
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar15 = __mulsf3(*puVar3,0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_5c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  (*pcVar10)(piVar2,aCStack_5c);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x11,0x11);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012d970 + 0x12d906));
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_54,extraout_s0_07,extraout_s1_07);
  (*pcVar10)(piVar2,aCStack_54);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x13,0x13);
  pcVar10 = *(code **)(*piVar2 + 0x6c);
LAB_0012d936:
  (*pcVar10)(piVar2,0);
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


