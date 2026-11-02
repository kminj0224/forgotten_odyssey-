/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001311f4  Symbol: Fin_Lode */

/* Ending_ani::Fin_Lode() */

void __thiscall Ending_ani::Fin_Lode(Ending_ani *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  CCTexture2D *pCVar5;
  CCFiniteTimeAction *pCVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  undefined8 uVar11;
  float extraout_s1_00;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  _ccColor4B local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  *(undefined4 *)(this + 0x110) = 1;
  piVar2 = (int *)cocos2d::CCLayer::node();
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,0,0);
  local_44 = (_ccColor4B)0x0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0xff;
  uVar3 = cocos2d::CCLayerColor::layerWithColor(&local_44);
  (**(code **)(*piVar2 + 0xcc))(piVar2,uVar3,0xffffffff);
  iVar1 = DAT_001313ec;
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001313e8 + 0x131244));
  pcVar8 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
  (*pcVar8)(piVar4,aCStack_40);
  puVar9 = *(undefined4 **)(iVar1 + 0x131264);
  pcVar8 = *(code **)(*piVar4 + 0x3c);
  uVar3 = __mulsf3(*puVar9,0x3f000000);
  __subsf3(uVar3,DAT_001313f0);
  uVar3 = __mulsf3(puVar9[1],0x3f000000);
  uVar3 = __addsf3(uVar3,0x40000000);
  uVar11 = __subsf3(uVar3,DAT_001313f0);
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar8)(piVar4,aCStack_38);
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  (**(code **)(*piVar4 + 0xf4))(piVar4,&local_48);
  (**(code **)(*piVar4 + 0xec))(piVar4,0x7f);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,0,0);
  pCVar5 = (CCTexture2D *)(**(code **)(*piVar4 + 0x118))(piVar4);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
  pcVar8 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
  (*pcVar8)(piVar4,aCStack_30);
  pcVar8 = *(code **)(*piVar4 + 0x3c);
  __mulsf3(*puVar9,0x3f000000);
  uVar3 = __mulsf3(puVar9[1],0x3f000000);
  uVar11 = __addsf3(uVar3,0x40000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar8)(piVar4,aCStack_28);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,1,1);
  fVar10 = (float)(**(code **)(*piVar4 + 0xec))(piVar4,0);
  pCVar6 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar10);
  uVar3 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_01);
  uVar7 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_02);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar6,uVar3,uVar7,0);
}


