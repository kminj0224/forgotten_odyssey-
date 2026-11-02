/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f1c6c  Symbol: reserve */

/* std::vector<cocos2d::CCSpriteFrame*, std::allocator<cocos2d::CCSpriteFrame*> >::reserve(unsigned
   int) */

undefined8 __thiscall
std::vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>>::reserve
          (vector<cocos2d::CCSpriteFrame*,std::allocator<cocos2d::CCSpriteFrame*>> *this,
          uint param_1)

{
  void *__dest;
  void *__src;
  uint local_1c;
  
  if (DAT_000f1cd0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558(DAT_000f1cd4 + 0xf1c7e);
  }
  __src = *(void **)this;
  local_1c = param_1;
  if ((uint)(*(int *)(this + 8) - (int)__src >> 2) < param_1) {
    local_1c = *(int *)(this + 4) - (int)__src >> 2;
    __dest = (void *)param_1;
    if (param_1 != 0) {
      __dest = operator_new(param_1 << 2);
    }
    if (local_1c != 0) {
      memmove(__dest,__src,local_1c << 2);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(void **)this = __dest;
    *(void **)(this + 4) = (void *)((int)__dest + local_1c * 4);
    *(void **)(this + 8) = (void *)((int)__dest + param_1 * 4);
  }
  return CONCAT44(local_1c,this);
}


