/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c834c  Symbol: set_Icon_New */

/* set_Icon_New(cocos2d::CCNode*, cocos2d::CCPoint, int, int) */

int * set_Icon_New(CCNode *param_1,CCPoint param_2,int param_3,int param_4)

{
  int *piVar1;
  int *this;
  undefined4 *puVar2;
  int iVar3;
  CCActionInterval *pCVar4;
  CCAction *pCVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 in_stack_00000000;
  CCPoint local_28;
  int local_24;
  CCPoint aCStack_20 [12];
  
  local_28 = param_2;
  local_24 = param_3;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000c83ec + 0xc835a));
  (**(code **)(*piVar1 + 0x3c))(piVar1,&local_28);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_4,in_stack_00000000);
  this = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000c83f0 + 0xc8380));
  pcVar6 = *(code **)(*this + 0x3c);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar2,0x3f000000);
  iVar3 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar8 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar6)(this,aCStack_20);
  fVar7 = (float)(**(code **)(*piVar1 + 0xcc))(piVar1,this,0,0);
  pCVar4 = (CCActionInterval *)cocos2d::CCBlink::actionWithDuration(fVar7,0x3f800000);
  pCVar5 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar4);
  cocos2d::CCNode::runAction((CCNode *)this,pCVar5);
  return piVar1;
}


