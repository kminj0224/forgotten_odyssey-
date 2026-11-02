/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011deb0  Symbol: Draw_Item */

/* New_Notice::Draw_Item(cocos2d::CCNode*, cocos2d::CCPoint, int, int, int, int, int) */

void New_Notice::Draw_Item
               (CCNode *param_1,CCPoint param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  CCTexture2D *pCVar6;
  int extraout_r1;
  int iVar7;
  CCTextAlignment CVar8;
  int iVar9;
  int *piVar10;
  code *pcVar11;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar12;
  float fVar13;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_a0;
  int local_9c;
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  piVar10 = *(int **)(DAT_0011e160 + 0x11debc);
  local_1c = *piVar10;
  local_a0 = param_3;
  local_9c = param_4;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011e164 + 0x11dec6));
  if (param_6 == 0) {
    pcVar2 = (char *)(DAT_0011e168 + 0x11dede);
  }
  else if (param_6 == 1) {
    pcVar2 = (char *)(DAT_0011e16c + 0x11dee8);
  }
  else if (param_6 == 2) {
    pcVar2 = (char *)(DAT_0011e170 + 0x11def2);
  }
  else {
    pcVar2 = (char *)(DAT_0011e174 + 0x11def8);
  }
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar2);
  pcVar11 = *(code **)(*piVar3 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_98,extraout_s0,extraout_s1);
  (*pcVar11)(piVar3,aCStack_98);
  (**(code **)(*piVar3 + 0x3c))(piVar3,&local_a0);
  (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar3,in_stack_0000000c,in_stack_00000010);
  if (param_5 == 0) goto LAB_0011e14c;
  memset(acStack_50,0,0x32);
  if (((param_5 == 0xa9) && (*(int *)(param_1 + 300) != 2)) && (*(int *)(param_1 + 300) != 4)) {
    pcVar2 = (char *)(DAT_0011e178 + 0x11df58);
    iVar7 = DAT_0011e17c + 0x11df5a;
    iVar9 = DAT_0011e180 + 0x11df5c;
  }
  else {
    iVar9 = *(int *)(*(int *)(DAT_0011e184 + 0x11df66) + param_5 * 0xc + 4);
    pcVar2 = (char *)(DAT_0011e188 + 0x11df74);
    iVar7 = DAT_0011e18c + 0x11df76;
  }
  sprintf(acStack_50,pcVar2,iVar7,iVar9);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  pcVar11 = *(code **)(*piVar4 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  __mulsf3(*puVar5,0x3f000000);
  iVar7 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar12 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar11)(piVar4,aCStack_90);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar4,0,param_5);
  if (param_5 - 0x51U < 0x46) {
    pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    (**(code **)(*piVar4 + 0xcc))(piVar4,piVar1,0,0);
    piVar3 = (int *)Draw_Number::node();
    (**(code **)(*piVar4 + 0xcc))(piVar4,piVar3,1,1);
    Draw_Number::SetNumberFont((Draw_Number *)piVar3,8);
    uVar12 = __aeabi_idivmod(param_5,10);
    fVar13 = (float)((ulonglong)uVar12 >> 0x20);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    if (extraout_r1 == 0) {
      cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar12,fVar13);
      uVar12 = (*pcVar11)(piVar1,aCStack_88);
      pcVar11 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar3,aCStack_80);
      param_7 = 10;
    }
    else {
      cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar12,fVar13);
      uVar12 = (*pcVar11)(piVar1,aCStack_78);
      pcVar11 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar3,aCStack_70);
      param_7 = extraout_r1;
    }
LAB_0011e146:
    CVar8 = 0;
  }
  else {
    if (((param_5 != 0xa9) || (*(int *)(param_1 + 300) == 2)) || (*(int *)(param_1 + 300) == 4)) {
      if (param_7 == 0) goto LAB_0011e14c;
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
      (**(code **)(*piVar4 + 0xcc))(piVar4,piVar1,0,0);
      Draw_Number::node();
      piVar3 = (int *)Draw_Number::node();
      (**(code **)(*piVar4 + 0xcc))(piVar4,piVar3,1,1);
      uVar12 = Draw_Number::SetNumberFont((Draw_Number *)piVar3,8);
      pcVar11 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      uVar12 = (*pcVar11)(piVar1,aCStack_60);
      pcVar11 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar3,aCStack_58);
      goto LAB_0011e146;
    }
    Draw_Number::node();
    piVar3 = (int *)Draw_Number::node();
    (**(code **)(*piVar4 + 0xcc))(piVar4,piVar3,1,1);
    uVar12 = Draw_Number::SetNumberFont((Draw_Number *)piVar3,1);
    pcVar11 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar11)(piVar3,aCStack_68);
    CVar8 = 2;
  }
  Draw_Number::SetNumber((Draw_Number *)piVar3,param_7,CVar8);
LAB_0011e14c:
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


