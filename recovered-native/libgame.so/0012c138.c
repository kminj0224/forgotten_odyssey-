/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c138  Symbol: onEnter */

/* LodingLayer::onEnter() */

void __thiscall LodingLayer::onEnter(LodingLayer *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  CCFiniteTimeAction *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  float fVar10;
  undefined8 uVar11;
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [16];
  CCObject *local_38;
  undefined4 local_34;
  undefined4 local_1c;
  
  iVar6 = DAT_0012c3a0 + 0x12c144;
  local_1c = **(undefined4 **)(iVar6 + DAT_0012c3a4);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012c3a8 + 0x12c16e));
  *(int **)(this + 0x110) = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x7c))();
  puVar7 = *(undefined4 **)(iVar6 + DAT_0012c3ac);
  __divsf3(*(undefined4 *)(iVar3 + 4),*puVar7);
  uVar11 = __extendsfdf2();
  uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_0012c390,DAT_0012c394);
  __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_0012c398,DAT_0012c39c);
  floor((double)CONCAT44(puVar7,iVar6));
  puVar8 = *(undefined4 **)(iVar6 + DAT_0012c3b0);
  __divdf3();
  uVar4 = __truncdfsf2();
  *puVar8 = uVar4;
  uVar11 = (**(code **)(**(int **)(this + 0x110) + 0x6c))(*(int **)(this + 0x110),0);
  piVar2 = *(int **)(this + 0x110);
  pcVar9 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar9)(piVar2,aCStack_50);
  piVar2 = *(int **)(this + 0x110);
  pcVar9 = *(code **)(*piVar2 + 0x3c);
  __mulsf3(*puVar7,0x3f000000);
  uVar11 = __mulsf3(puVar7[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar9)(piVar2,aCStack_48);
  piVar2 = *(int **)(this + 0x110);
  uVar4 = *puVar7;
  pcVar9 = *(code **)(*piVar2 + 0x2c);
  puVar8 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar4 = __divsf3(uVar4,*puVar8);
  (*pcVar9)(piVar2,uVar4);
  piVar2 = *(int **)(this + 0x110);
  uVar4 = puVar7[1];
  pcVar9 = *(code **)(*piVar2 + 0x34);
  iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar4 = __divsf3(uVar4,*(undefined4 *)(iVar3 + 4));
  (*pcVar9)(piVar2,uVar4);
  (**(code **)(**(int **)(this + 0x110) + 0xec))(*(int **)(this + 0x110),0);
  fVar10 = (float)(**(code **)(*(int *)this + 200))(this,*(undefined4 *)(this + 0x110),0);
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar10);
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCSpawn::actions(pCVar5,0);
  local_38 = *(CCObject **)(iVar6 + DAT_0012c3b8);
  local_34 = 0;
  uVar4 = cocos2d::CCCallFunc::actionWithTarget((CCCallFunc *)this,local_38,(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar4,0);
}


