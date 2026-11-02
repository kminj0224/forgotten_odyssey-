/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd8b0  Symbol: FUN_000bd8b0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000bd8b0(void)

{
  size_t __size;
  char *pcVar1;
  void *__src;
  void *__s;
  GenericDocument *pGVar2;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  **ppGVar3;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this;
  int iVar4;
  _KG_Animation *this_00;
  char *unaff_r6;
  uint uVar5;
  _KG_Animation **param_7;
  char *param_8;
  int param_17;
  int param_18;
  int param_19;
  int param_20;
  void *param_21;
  ulong param_22;
  undefined4 param_23;
  undefined4 param_24;
  undefined4 param_25;
  
  param_23 = 0;
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
            ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000c0,
             (MemoryPoolAllocator *)0x0,0x400);
  param_24 = 0;
  param_25 = 0;
  pcVar1 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_8);
  param_21 = (void *)0x0;
  param_22 = 0;
  param_20 = *(int *)(iRam000bd9c0 + 0xbd8d4) + 8;
  __src = (void *)cocos2d::CCFileUtils::getFileData(pcVar1,unaff_r6,&stack0x000000ac);
  __size = param_22;
  param_21 = __src;
  if (param_22 == 0) {
    cocos2d::CCFileData::~CCFileData((CCFileData *)&stack0x000000a4);
    rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
              ((Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&stack0x000000c0);
    FUN_000be284(0);
  }
  __s = malloc(__size);
  memset(__s,0,__size);
  memcpy(__s,__src,__size);
  FUN_001eed40(&stack0x00000044,__s,&stack0x00000040);
  FUN_001eebe0(&stack0x00000048,&stack0x00000044,0,__size);
  FUN_001ee874(&stack0x00000044,&stack0x00000048);
  FUN_001ed6b8(&stack0x00000048);
  iVar4 = param_17;
  if (param_17 == 0) {
    FUN_000be288();
  }
  param_18 = iVar4;
  param_19 = iVar4;
  pGVar2 = rapidjson::
           GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::
           ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                     ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       *)&stack0x000000b0,(GenericStringStream *)&stack0x0000009c);
  uVar5 = *(uint *)(pGVar2 + 0x28);
  if (uVar5 != 0) {
    FUN_000be288();
  }
  ppGVar3 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             **)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              *)&stack0x000000b0,(char *)(DAT_000bd9c4 + 0xbd964));
  this = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          *)rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](*ppGVar3,(char *)(DAT_000bd9c8 + 0xbd96e));
  iVar4 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](this,(char *)(DAT_000bd9cc + 0xbd976));
  cocos2d::CCSize::CCSize((CCSize *)&stack0x0000004c);
  while( true ) {
    if (*(uint *)(iVar4 + 4) <= uVar5) break;
    this_00 = (_KG_Animation *)operator_new(DAT_000bd9d0);
    uVar5 = uVar5 + 1;
    _KG_Animation::_KG_Animation(this_00);
    *param_7 = this_00;
    param_7 = param_7 + 1;
  }
  FUN_000be1a6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


