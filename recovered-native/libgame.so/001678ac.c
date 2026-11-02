/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001678ac  Symbol: CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::CCMutableArray(unsigned int) */

CCMutableArray<cocos2d::CCTouchHandler*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::CCMutableArray
          (CCMutableArray<cocos2d::CCTouchHandler*> *this,uint param_1)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_001678dc + 0x1678bc) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (param_1 != 0) {
    std::vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>>::reserve
              ((vector<cocos2d::CCTouchHandler*,std::allocator<cocos2d::CCTouchHandler*>> *)
               (this + 0x14),param_1);
  }
  return this;
}


