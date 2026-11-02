/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161148  Symbol: initWithString */

/* cocos2d::CCTexture2D::initWithString(char const*, cocos2d::CCSize const&,
   cocos2d::CCTextAlignment, char const*, float) */

int cocos2d::CCTexture2D::initWithString
              (char *param_1,CCSize *param_2,CCTextAlignment param_3,char *param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ETextAlign EVar4;
  char *in_stack_00000000;
  undefined4 in_stack_00000004;
  CCImage aCStack_2c [24];
  
  EVar4 = 0x33;
  VolatileTexture::addStringTexture
            ((CCTexture2D *)param_1,(char *)param_2,(CCSize *)param_3,(CCTextAlignment)param_4,
             in_stack_00000000,param_5);
  CCImage::CCImage(aCStack_2c);
  if (param_4 != (char *)0x1) {
    EVar4 = 0x32 - (param_4 == (char *)0x0);
  }
  iVar1 = __fixsfsi(*(undefined4 *)param_3);
  iVar2 = __fixsfsi(*(undefined4 *)(param_3 + 4));
  iVar3 = __fixsfsi(in_stack_00000004);
  iVar1 = CCImage::initWithString
                    (aCStack_2c,(char *)param_2,iVar1,iVar2,EVar4,in_stack_00000000,iVar3);
  if (iVar1 != 0) {
    iVar1 = initWithImage((CCTexture2D *)param_1,aCStack_2c);
  }
  CCImage::~CCImage(aCStack_2c);
  return iVar1;
}


