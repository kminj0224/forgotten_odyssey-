/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016444c  Symbol: tileAt */

/* cocos2d::CCTMXLayer::tileAt(cocos2d::CCPoint const&) */

int * __thiscall cocos2d::CCTMXLayer::tileAt(CCTMXLayer *this,CCPoint *param_1)

{
  int *this_00;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  CCTMXLayer aCStack_40 [8];
  CCRect local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCRect aCStack_28 [20];
  
  this_00 = (int *)tileGIDAt((CCPoint *)this);
  if (this_00 != (int *)0x0) {
    uVar1 = __mulsf3(param_1[1],*(undefined4 *)(this + 0x110));
    __addsf3(uVar1,*param_1);
    uVar2 = __fixsfsi();
    this_00 = (int *)CCNode::getChildByTag((CCNode *)this,uVar2);
    if (this_00 == (int *)0x0) {
      CCTMXTilesetInfo::rectForGID((uint)&local_38);
      uVar1 = *(undefined4 *)(this + 0x154);
      __divsf3(local_38,uVar1);
      __divsf3(local_34,uVar1);
      __divsf3(local_30,uVar1);
      uVar5 = __divsf3(local_2c,uVar1);
      CCRect::CCRect(aCStack_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,
                     extraout_s3);
      memcpy(&local_38,aCStack_28,0x10);
      this_00 = (int *)operator_new(0x1c8);
      CCSprite::CCSprite((CCSprite *)this_00);
      CCSprite::initWithBatchNode((CCSprite *)this_00,(CCSpriteBatchNode *)this,&local_38);
      pcVar4 = *(code **)(*this_00 + 0x3c);
      positionAt(aCStack_40,(CCPoint *)this);
      (*pcVar4)(this_00,aCStack_40);
      pcVar4 = *(code **)(*this_00 + 0x1c);
      vertexZForPos((CCPoint *)this);
      uVar1 = __floatsisf();
      (*pcVar4)(this_00,uVar1);
      (**(code **)(*this_00 + 0x74))(this_00,DAT_00164550 + 0x164522);
      (**(code **)(*this_00 + 0xec))(this_00,this[0x134]);
      uVar3 = atlasIndexForExistantZ(this,uVar2);
      CCSpriteBatchNode::addSpriteWithoutQuad
                ((CCSpriteBatchNode *)this,(CCSprite *)this_00,uVar3,uVar2);
      CCObject::release((CCObject *)this_00);
    }
  }
  return this_00;
}


