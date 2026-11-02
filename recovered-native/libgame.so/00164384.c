/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164384  Symbol: setTileGID */

/* cocos2d::CCTMXLayer::setTileGID(unsigned int, cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCTMXLayer::setTileGID(CCTMXLayer *this,uint param_1,CCPoint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  CCSprite *this_00;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  CCRect local_38;
  undefined4 local_34;
  CCSize local_30;
  undefined4 local_2c;
  CCRect aCStack_28 [20];
  
  uVar1 = tileGIDAt((CCPoint *)this);
  if (uVar1 != param_1) {
    if (param_1 == 0) {
      removeTileAt(this,param_2);
    }
    else if (uVar1 == 0) {
      insertTileForGID(this,param_1,param_2);
    }
    else {
      uVar2 = __mulsf3(param_2[1],*(undefined4 *)(this + 0x110));
      __addsf3(uVar2,*param_2);
      iVar3 = __fixunssfsi();
      this_00 = (CCSprite *)CCNode::getChildByTag((CCNode *)this,iVar3);
      if (this_00 == (CCSprite *)0x0) {
        updateTileForGID(this,param_1,param_2);
      }
      else {
        CCTMXTilesetInfo::rectForGID((uint)&local_38);
        uVar2 = *(undefined4 *)(this + 0x154);
        __divsf3(local_38,uVar2);
        __divsf3(local_34,uVar2);
        __divsf3(local_30,uVar2);
        uVar4 = __divsf3(local_2c,uVar2);
        CCRect::CCRect(aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2,
                       extraout_s3);
        memcpy(&local_38,aCStack_28,0x10);
        CCSprite::setTextureRectInPixels(this_00,&local_38,false,&local_30);
        *(uint *)(iVar3 * 4 + *(int *)(this + 0x120)) = param_1;
      }
    }
  }
  return;
}


