/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f1cd8  Symbol: CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(unsigned int) */

CCMutableArray<cocos2d::CCSpriteFrame*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this,uint param_1)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_000f1d08 + 0xf1ce8) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (param_1 != 0) {
    std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::reserve
              ((vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>> *)
               (this + 0x14),param_1);
  }
  return this;
}


