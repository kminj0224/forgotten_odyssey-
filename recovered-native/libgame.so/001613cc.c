/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001613cc  Symbol: initWithTexture */

/* cocos2d::CCTextureAtlas::initWithTexture(cocos2d::CCTexture2D*, unsigned int) */

CCObject * __thiscall
cocos2d::CCTextureAtlas::initWithTexture(CCTextureAtlas *this,CCTexture2D *param_1,uint param_2)

{
  void *__ptr;
  void *pvVar1;
  CCObject *this_00;
  int iVar2;
  
  *(uint *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x24) = 0;
  *(CCTexture2D **)(this + 0x2c) = param_1;
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  iVar2 = *(int *)(this + 0x28);
  __ptr = calloc(iVar2 * 0x60,1);
  *(void **)(this + 0x30) = __ptr;
  pvVar1 = calloc(iVar2 * 0xc,1);
  *(void **)(this + 0x14) = pvVar1;
  if (((__ptr == (void *)0x0) || (pvVar1 == (void *)0x0)) && (iVar2 != 0)) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined4 *)(this + 0x30) = 0;
    }
    if (*(void **)(this + 0x14) != (void *)0x0) {
      free(*(void **)(this + 0x14));
      *(undefined4 *)(this + 0x14) = 0;
    }
    this_00 = *(CCObject **)(this + 0x2c);
    if (this_00 != (CCObject *)0x0) {
      CCObject::release(this_00);
      this_00 = (CCObject *)0x0;
      *(undefined4 *)(this + 0x2c) = 0;
    }
  }
  else {
    glGenBuffers(2,this + 0x18);
    this[0x20] = (CCTextureAtlas)0x1;
    initIndices();
    this_00 = (CCObject *)0x1;
  }
  return this_00;
}


