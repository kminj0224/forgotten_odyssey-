/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e098  Symbol: tgaRGBtogreyscale */

/* cocos2d::tgaRGBtogreyscale(cocos2d::sImageTGA*) */

void cocos2d::tgaRGBtogreyscale(sImageTGA *param_1)

{
  sImageTGA sVar1;
  undefined uVar2;
  void *pvVar3;
  void *__ptr;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  sVar1 = param_1[5];
  if (sVar1 != (sImageTGA)0x8) {
    pvVar3 = malloc((int)*(short *)(param_1 + 6) * (int)*(short *)(param_1 + 8));
    if (pvVar3 != (void *)0x0) {
      iVar4 = 0;
      iVar5 = 0;
      while( true ) {
        __ptr = *(void **)(param_1 + 0xc);
        if ((int)*(short *)(param_1 + 8) * (int)*(short *)(param_1 + 6) <= iVar4) break;
        uVar6 = __floatsidf(*(undefined *)((int)__ptr + iVar5));
        uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0015e148,DAT_0015e14c);
        uVar7 = __floatsidf(*(undefined *)((int)__ptr + iVar5 + 1));
        uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0015e150,DAT_0015e154);
        uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
        uVar7 = __floatsidf(*(undefined *)((int)__ptr + iVar5 + 2));
        uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0015e158,DAT_0015e15c);
        __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                 (int)((ulonglong)uVar7 >> 0x20));
        uVar2 = __fixunsdfsi();
        *(undefined *)((int)pvVar3 + iVar4) = uVar2;
        iVar5 = iVar5 + (uint)((byte)sVar1 >> 3);
        iVar4 = iVar4 + 1;
      }
      free(__ptr);
      param_1[5] = (sImageTGA)0x8;
      param_1[4] = (sImageTGA)0x3;
      *(void **)(param_1 + 0xc) = pvVar3;
    }
  }
  return;
}


