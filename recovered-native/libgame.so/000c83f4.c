/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c83f4  Symbol: set_Icon_New */

/* set_Icon_New(cocos2d::CCNode*, int, int) */

int * set_Icon_New(CCNode *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *this;
  CCActionInterval *pCVar5;
  CCAction *pCVar6;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000c84ec + 0xc8402));
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar8 = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  __subsf3(uVar8,uVar3);
  iVar4 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar8 = *(undefined4 *)(iVar4 + 4);
  iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  uVar10 = __subsf3(uVar8,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar7)(piVar1,aCStack_28);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_2,param_3);
  this = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000c84f0 + 0xc8480));
  pcVar7 = *(code **)(*this + 0x3c);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar2,0x3f000000);
  iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar10 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar7)(this,aCStack_20);
  fVar9 = (float)(**(code **)(*piVar1 + 0xcc))(piVar1,this,0,0);
  pCVar5 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(fVar9,0x3f800000);
  pCVar6 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar5);
  cocos2d::CCNode::runAction((CCNode *)this,pCVar6);
  return piVar1;
}


