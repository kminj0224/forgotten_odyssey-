/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bd890  Symbol: anim_Lode_copy */

/* WARNING: Control flow encountered bad instruction data */
/* anim_Lode_copy(char const*, _KG_Anit*, char const*) */

void anim_Lode_copy(char *param_1,_KG_Anit *param_2,char *param_3)

{
  int iVar1;
  size_t __size;
  char *pcVar2;
  void *__src;
  void *__s;
  GenericDocument *pGVar3;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  **ppGVar4;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this;
  _KG_Animation *this_00;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined auStack_b8 [4];
  int iStack_b4;
  undefined auStack_b0 [4];
  CCSize aCStack_ac [80];
  GenericStringStream aGStack_5c [8];
  int iStack_54;
  void *pvStack_50;
  size_t sStack_4c;
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  aGStack_48 [12];
  undefined4 uStack_3c;
  Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> aSStack_38 [24];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0x140;
    iVar5 = iVar5 + 4;
    *(undefined4 *)(param_2 + iVar1) = 0;
  } while (iVar5 != 0xf0);
  pcVar6 = (char *)(iRam000bd9bc + 0xbd8b2);
  uStack_3c = 0;
  rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Stack
            (aSStack_38,(MemoryPoolAllocator *)0x0,0x400);
  uStack_20 = 0;
  uStack_1c = 0;
  pcVar2 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_1);
  pvStack_50 = (void *)0x0;
  sStack_4c = 0;
  iStack_54 = *(int *)(iRam000bd9c0 + 0xbd8d4) + 8;
  __src = (void *)cocos2d::CCFileUtils::getFileData(pcVar2,pcVar6,&sStack_4c);
  __size = sStack_4c;
  pvStack_50 = __src;
  if (sStack_4c == 0) {
    cocos2d::CCFileData::~CCFileData((CCFileData *)&iStack_54);
    rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~Stack
              (aSStack_38);
    FUN_000be284(0);
  }
  __s = malloc(__size);
  memset(__s,0,__size);
  memcpy(__s,__src,__size);
  FUN_001eed40(&iStack_b4,__s,auStack_b8);
  FUN_001eebe0(auStack_b0,&iStack_b4,0,__size);
  FUN_001ee874(&iStack_b4,auStack_b0);
  FUN_001ed6b8(auStack_b0);
  if (iStack_b4 == 0) {
    FUN_000be288();
  }
  pGVar3 = rapidjson::
           GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           ::
           ParseStream<2u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                     (aGStack_48,aGStack_5c);
  uVar7 = *(uint *)(pGVar3 + 0x28);
  if (uVar7 != 0) {
    FUN_000be288();
  }
  ppGVar4 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
             **)rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::operator[]((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                              *)aGStack_48,(char *)(DAT_000bd9c4 + 0xbd964));
  this = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          *)rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::operator[](*ppGVar4,(char *)(DAT_000bd9c8 + 0xbd96e));
  iVar5 = rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::operator[](this,(char *)(DAT_000bd9cc + 0xbd976));
  cocos2d::CCSize::CCSize(aCStack_ac);
  while( true ) {
    if (*(uint *)(iVar5 + 4) <= uVar7) break;
    this_00 = (_KG_Animation *)operator_new(DAT_000bd9d0);
    uVar7 = uVar7 + 1;
    _KG_Animation::_KG_Animation(this_00);
    *(_KG_Animation **)param_2 = this_00;
    param_2 = (_KG_Anit *)((int)param_2 + 4);
  }
  FUN_000be1a6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


