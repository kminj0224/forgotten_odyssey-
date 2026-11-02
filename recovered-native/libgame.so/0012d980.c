/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012d980  Symbol: Play_UI_Call */

/* MainMenuLayer::Play_UI_Call() */

void MainMenuLayer::Play_UI_Call(void)

{
  int *in_r0;
  CCNode *this;
  CCAction *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  float in_s0;
  float fVar8;
  float extraout_s0;
  float in_s1;
  float extraout_s1;
  float extraout_s2;
  undefined8 uVar9;
  undefined8 uVar10;
  _ccColor4B local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  CCPoint aCStack_30 [28];
  
  iVar7 = *(int *)(DAT_0012db90 + 0x12d98c);
  local_34 = (_ccColor4B)0x0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  this = (CCNode *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_34,in_s0,in_s1);
  fVar8 = (float)(**(code **)(*in_r0 + 0xcc))(in_r0,this,6,6);
  pCVar1 = (CCAction *)cocos2d::CCFadeTo::actionWithDuration(fVar8,(uchar)DAT_0012db94);
  cocos2d::CCNode::runAction(this,pCVar1);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012db98 + 0x12d9ca));
  pcVar6 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  uVar9 = __floatsidf(0);
  uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0012db78,DAT_0012db7c);
  uVar9 = __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0012db80,DAT_0012db84);
  __mulsf3(*puVar3,0x3f000000);
  uVar10 = __extendsfdf2();
  __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  __truncdfsf2();
  uVar9 = __extendsfdf2(*(undefined4 *)(iVar7 + 4));
  uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0012db88,DAT_0012db8c);
  iVar7 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
  uVar10 = __extendsfdf2();
  __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar9 = __truncdfsf2();
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar2,aCStack_30);
  (**(code **)(*piVar2 + 0x34))(piVar2,0);
  fVar8 = (float)(**(code **)(*in_r0 + 0xcc))(in_r0,piVar2,0xb);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar8);
  uVar5 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0,extraout_s1,extraout_s2);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,0);
}


