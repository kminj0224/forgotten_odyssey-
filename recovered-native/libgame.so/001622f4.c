/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001622f4  Symbol: addImageAsyncCallBack */

/* cocos2d::CCTextureCache::addImageAsyncCallBack(float) */

void cocos2d::CCTextureCache::addImageAsyncCallBack(float param_1)

{
  int in_r0;
  CCTexture2D *this;
  char *pcVar1;
  EImageFormat EVar2;
  undefined4 *puVar3;
  int iVar4;
  CCImage *this_00;
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
  *this_01;
  code *pcVar5;
  pthread_mutex_t *__mutex;
  char **ppcVar6;
  int iVar7;
  undefined4 *puVar8;
  CCObject *this_02;
  undefined auStack_28 [4];
  basic_string bStack_24;
  code *local_20;
  char *local_1c;
  
  iVar7 = *(int *)(DAT_001623f8 + 0x16230c);
  __mutex = (pthread_mutex_t *)(DAT_001623f8 + 0x162310);
  pthread_mutex_lock(__mutex);
  puVar3 = *(undefined4 **)(iVar7 + 8);
  if (*(undefined4 **)(iVar7 + 0x18) == puVar3) {
    pthread_mutex_unlock(__mutex);
  }
  else {
    puVar8 = (undefined4 *)*puVar3;
    if (puVar3 == (undefined4 *)(*(int *)(iVar7 + 0x10) + -4)) {
      operator_delete(*(void **)(iVar7 + 0xc));
      iVar4 = *(int *)(iVar7 + 0x14);
      *(int *)(iVar7 + 0x14) = iVar4 + 4;
      puVar3 = *(undefined4 **)(iVar4 + 4);
      *(undefined4 **)(iVar7 + 0xc) = puVar3;
      *(undefined4 **)(iVar7 + 0x10) = puVar3 + 0x80;
    }
    else {
      puVar3 = puVar3 + 1;
    }
    iVar4 = DAT_001623fc;
    *(undefined4 **)(iVar7 + 8) = puVar3;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar4 + 0x162356));
    ppcVar6 = (char **)*puVar8;
    this_00 = (CCImage *)puVar8[1];
    pcVar1 = *ppcVar6;
    local_20 = (code *)ppcVar6[2];
    this_02 = (CCObject *)ppcVar6[1];
    local_1c = ppcVar6[3];
    this = (CCTexture2D *)operator_new(0x38);
    CCTexture2D::CCTexture2D(this);
    CCTexture2D::initWithImage(this,this_00);
    EVar2 = puVar8[2];
    if (EVar2 != 0) {
      EVar2 = 1;
    }
    VolatileTexture::addImageTexture(this,pcVar1,EVar2);
    this_01 = *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                **)(in_r0 + 0x14);
    FUN_001eed40(&bStack_24,pcVar1,auStack_28);
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
    ::setObject(this_01,this,&bStack_24);
    FUN_001ed6b8(&bStack_24);
    CCObject::autorelease((CCObject *)this);
    if ((this_02 != (CCObject *)0x0) && ((local_20 != (code *)0x0 || ((int)local_1c << 0x1f < 0))))
    {
      pcVar5 = local_20;
      if ((int)local_1c << 0x1f < 0) {
        pcVar5 = *(code **)(local_20 + *(int *)(this_02 + ((int)local_1c >> 1)));
      }
      (*pcVar5)(this_02 + ((int)local_1c >> 1),this);
      CCObject::release(this_02);
    }
    if (this_00 != (CCImage *)0x0) {
      CCImage::~CCImage(this_00);
      operator_delete(this_00);
    }
    FUN_001ed6b8(ppcVar6);
    operator_delete(ppcVar6);
    operator_delete(puVar8);
  }
  return;
}


