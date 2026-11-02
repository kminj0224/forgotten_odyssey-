/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159f4c  Symbol: CCSprite */

/* cocos2d::CCSprite::CCSprite() */

CCSprite * __thiscall cocos2d::CCSprite::CCSprite(CCSprite *this)

{
  int iVar1;
  
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_00159fa0 + 0x159f5e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x100) = iVar1 + 0x144;
  *(undefined4 *)(this + 0x124) = 0;
  *(int *)(this + 0xfc) = iVar1 + 300;
  CCRect::CCRect((CCRect *)(this + 300));
  CCRect::CCRect((CCRect *)(this + 0x13c));
  CCPoint::CCPoint((CCPoint *)(this + 0x150));
  CCPoint::CCPoint((CCPoint *)(this + 0x158));
  return this;
}


