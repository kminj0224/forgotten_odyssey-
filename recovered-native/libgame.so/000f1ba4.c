/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f1ba4  Symbol: Draw_Unit_Limit */

/* Effect::Draw_Unit_Limit(cocos2d::CCNode*, bool) */

void __thiscall Effect::Draw_Unit_Limit(Effect *this,CCNode *param_1,bool param_2)

{
  CCSpriteFrame *pCVar1;
  int *this_00;
  undefined4 *puVar2;
  CCActionInterval *this_01;
  CCAction *pCVar3;
  code *pcVar4;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar5;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  if ((*(int *)(this + 0x118) != 0) &&
     (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114) !=
      (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0)) {
    pCVar1 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x114),0);
    this_00 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar1);
    pcVar4 = *(code **)(*this_00 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0,extraout_s1);
    (*pcVar4)(this_00,aCStack_30);
    pcVar4 = *(code **)(*this_00 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar5 = __mulsf3(*puVar2,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar4)(this_00,aCStack_28);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,0,0x3d8);
    if (param_2) {
      (**(code **)(*this_00 + 0x108))(this_00,0x40000000);
      pcVar4 = *(code **)(*this_00 + 0x3c);
      uVar5 = (**(code **)(*this_00 + 0x38))(this_00);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
      (*pcVar4)(this_00,aCStack_20);
    }
    this_01 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar3 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_01);
    cocos2d::CCNode::runAction((CCNode *)this_00,pCVar3);
    cocos2d::CCObject::release((CCObject *)this_01);
  }
  return;
}


