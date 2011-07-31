/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

typedef struct _NSZone NSZone;

typedef struct ReadOnlyDataFile ReadOnlyDataFile;

typedef struct WordTrieNode WordTrieNode;

template<>
struct RefPtr<KB::WordTrieNode> {
	WordTrieNode* m_ptr;
};

template<>
struct VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> {
	RefPtr<KB::WordTrieNode>* m_buffer;
	unsigned m_capacity;
};

template<>
struct Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> {
	unsigned m_size;
	VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> m_buffer;
};

typedef struct String {
	unsigned short m_size;
	unsigned short m_capacity;
	unsigned short m_length;
	unsigned short m_sort_key_length;
	unsigned char m_buffer_type;
	char* m_buffer;
	BOOL m_static_buffer[16];
} String;

typedef struct WordTrieSearch {
	Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> m_states;
	int m_type;
	String m_string;
	String m_sort_key;
} WordTrieSearch;

typedef struct PackedTrieSibling {
	union {
		unsigned whole;
		struct {
			unsigned child_offset : 24;
			unsigned patricia_key_size_1 : 2;
			unsigned has_child_offset_type : 2;
			unsigned has_word_termination_prob : 1;
			unsigned has_unigram_list_offset : 1;
			unsigned has_freq : 1;
			unsigned more_siblings : 1;
		} v2fields;
		struct {
			unsigned child_offset_byte0 : 8;
			unsigned child_offset_byte1 : 8;
			unsigned child_offset_byte2 : 8;
			unsigned flags_byte : 8;
		} v2bytes;
	} sortNchild;
	union {
		unsigned whole;
		struct {
			unsigned word_offset : 23;
			unsigned word_is_0freq : 1;
			unsigned compacted_freq : 8;
		} fields;
		struct {
			unsigned child_offset_byte0 : 8;
			unsigned child_offset_byte1 : 8;
			unsigned child_offset_byte2 : 8;
			unsigned flags_byte : 8;
		} v2bytes;
	} freqNword;
	unsigned char patricia_key_bytes[4];
} PackedTrieSibling;

template<>
struct TrieArrayCache<KB::PackedTrieSibling,const char*> {
	char* m_loaded_for_parent;
	int m_num_tags;
	unsigned char m_tag_list[256];
	PackedTrieSibling m_values[256];
	char* m_base_addr;
};

template<>
struct TrieArrayCacheSet<KB::TrieArrayCache<KB::PackedTrieSibling, const char*>,const char*> {
	TrieArrayCache<KB::PackedTrieSibling,const char*> root;
	TrieArrayCache<KB::PackedTrieSibling,const char*> deep;
};

template<>
struct HashTraits<KB::String>;

template<>
struct Bucket<KB::String,unsigned int>;

template<>
struct Hashmap<KB::String,unsigned int> {
	unsigned m_size;
	unsigned m_capacity;
	unsigned m_table_size;
	unsigned m_extra_size;
	unsigned m_extra_index;
	bool m_rehashing;
	HashTraits<KB::String> m_traits;
	Bucket<KB::String,unsigned int>* m_table;
	Bucket<KB::String,unsigned int>* m_extra;
};

typedef struct SortKeyByteConverter {
	/*function-pointer*/ void** _vptr$SortKeyByteConverter;
	unsigned m_single_primaries_to_letter[256];
	bool m_is_known_lead_primary[256];
	Hashmap<KB::String,unsigned int> m_sort_keys_to_letter_forms;
} SortKeyByteConverter;

typedef struct WordTrie {
	ReadOnlyDataFile* m_index;
	ReadOnlyDataFile* m_words;
	unsigned m_word_count;
	RefPtr<KB::WordTrieNode> m_root;
	WordTrieSearch m_search;
	WordTrieSearch m_saved_search;
	bool m_returns_words_shorter_than_search;
	bool m_valid;
	TrieArrayCacheSet<KB::TrieArrayCache<KB::PackedTrieSibling, const char*>,const char*> m_trie_array_cache_set;
	unsigned m_compilation_flags;
	unsigned m_unigram_payload_offset;
	unsigned m_trie_root_offset;
	float m_root_usage_sum;
	SortKeyByteConverter m_sort_key_converter;
} WordTrie;

typedef struct StaticDictionaryAlphabet {
	/*function-pointer*/ void** _vptr$StaticDictionary;
	WordTrie m_trie;
	int m_log_level;
} StaticDictionaryAlphabet;

typedef struct Input Input;

template<>
struct Vector<KB::Input> {
	unsigned m_size;
	unsigned m_capacity;
	Input* m_elements;
};

template<>
struct Vector<KB::String> {
	unsigned m_size;
	unsigned m_capacity;
	String* m_elements;
};

template<>
struct Bucket<KB::String,KB::Word>;

template<>
struct Hashmap<KB::String,KB::Word> {
	unsigned m_size;
	unsigned m_capacity;
	unsigned m_table_size;
	unsigned m_extra_size;
	unsigned m_extra_index;
	bool m_rehashing;
	HashTraits<KB::String> m_traits;
	Bucket<KB::String,KB::Word>* m_table;
	Bucket<KB::String,KB::Word>* m_extra;
};

typedef struct __CFString* CFStringRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct DynamicDictionaryImpl DynamicDictionaryImpl;

template<>
struct RefPtr<KB::DynamicDictionaryImpl> {
	DynamicDictionaryImpl* m_ptr;
};

typedef struct DynamicDictionary {
	RefPtr<KB::DynamicDictionaryImpl> m_impl;
	int m_log_level;
} DynamicDictionary;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct TIInputManagerAlphabet {
	/*function-pointer*/ void** _field1;
	StaticDictionaryAlphabet _field2;
	Vector<KB::Input> _field3;
	String _field4;
	String _field5;
	Vector<KB::String> _field6;
	unsigned _field7;
	unsigned _field8;
	Hashmap<KB::String,KB::Word> _field9;
	bool _field10;
	bool _field11;
	bool _field12;
	bool _field13;
	bool _field14;
	bool _field15;
	int _field16;
	CFStringRef _field17;
	CFLocaleRef _field18;
	DynamicDictionary _field19;
	bool _field20;
	CFDictionaryRef _field21;
	CFArrayRef _field22;
} TIInputManagerAlphabet;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct StrokeBuildManager StrokeBuildManager;

typedef struct KeyArea KeyArea;

typedef struct KeyCharClassifier {
	unsigned short m_classifier_flags;
} KeyCharClassifier;

typedef struct SortedKeyLayout {
	unsigned m_size;
	unsigned m_capacity;
	KeyArea* m_elements;
	KeyArea* m_neighborKeys[13];
	int m_numNeighborKeys;
	int m_neighborIteratorIndex;
	float m_neighborSearchRadiusSQE;
	CGPoint m_coordinateForNeighborSort;
	KeyCharClassifier m_unionOfKeysClassifier;
	float m_leftmostXcentroid;
	float m_rightmostXcentroid;
	float m_smallestKeyRadius;
	float g_touchKeyErrorNormalizer;
	float g_interTouchErrorNormalizer;
	float k_maxKeyRadiusBeforeDeadzone;
	float k_searchRadius_TypingSlow;
	float k_searchRadius_TypingFast;
	float k_errorStdev_KeyCenterToFinger;
	float k_errorStdev_KeyCenterToThumb;
	float k_errorStdev_InterFinger;
	float k_errorStdev_InterThumb;
	float k_errorStdev_InterNonAlphabetic;
} SortedKeyLayout;

typedef struct TIKeyLayout* TIKeyLayoutRef;

typedef struct PriorTouchKeyVectors PriorTouchKeyVectors;

template<>
struct Vector<ZT::PriorTouchKeyVectors> {
	unsigned m_size;
	unsigned m_capacity;
	PriorTouchKeyVectors* m_elements;
};

typedef struct DictionaryCursors DictionaryCursors;

template<>
struct Vector<KB::DictionaryCursors> {
	unsigned m_size;
	unsigned m_capacity;
	DictionaryCursors* m_elements;
};

typedef struct LayoutDictionaryContext {
	SortedKeyLayout* key_layout;
	WordTrie* static_trie;
	DynamicDictionary* dynamic_dict;
	Vector<ZT::PriorTouchKeyVectors> prior_touch_error_vector_cache;
	Vector<KB::DictionaryCursors> cursor_prediction_temp_list;
	SortKeyByteConverter* sort_key_converter;
	unsigned compoundable_meta_flags;
	bool allow_space_corrections;
	bool uses_candidate_selection;
} LayoutDictionaryContext;

template<>
struct Bucket<KB::String,KB::FPoint>;

template<>
struct Hashmap<KB::String,KB::FPoint> {
	unsigned m_size;
	unsigned m_capacity;
	unsigned m_table_size;
	unsigned m_extra_size;
	unsigned m_extra_index;
	bool m_rehashing;
	HashTraits<KB::String> m_traits;
	Bucket<KB::String,KB::FPoint>* m_table;
	Bucket<KB::String,KB::FPoint>* m_extra;
};

typedef struct TIInputManagerZephyr {
	/*function-pointer*/ void** _field1;
	StaticDictionaryAlphabet _field2;
	Vector<KB::Input> _field3;
	String _field4;
	String _field5;
	Vector<KB::String> _field6;
	unsigned _field7;
	unsigned _field8;
	Hashmap<KB::String,KB::Word> _field9;
	bool _field10;
	bool _field11;
	bool _field12;
	bool _field13;
	bool _field14;
	bool _field15;
	int _field16;
	CFStringRef _field17;
	CFLocaleRef _field18;
	DynamicDictionary _field19;
	StrokeBuildManager* _field20;
	SortedKeyLayout _field21;
	TIKeyLayoutRef _field22;
	String _field23;
	LayoutDictionaryContext _field24;
	Hashmap<KB::String,KB::FPoint> _field25;
	int _field26;
	bool _field27;
} TIInputManagerZephyr;

typedef struct TITouch {
	CGPoint _field1;
	float _field2;
	double _field3;
} TITouch;


