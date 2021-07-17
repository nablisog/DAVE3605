using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace ShortAlgo
{
    class Program
    {
        public static void Main(string[] args)
        {
            int[] array = { 1, 1, 2, 3, 3, 3, 4, 5, 6, 6, 6, 7, 8 };
            Console.WriteLine(" THE TOTAL NON DUPLICATED VALUES ARE : " + NonDuplicate(array));

        }        
        public static int NonDuplicate(int[] array)
        {
            List<int> list = new List<int>();
            list.AddRange(array.Where(i => !list.Contains(i)));
            return list.Count;
        }

        
        public static bool Pluandrum(String word)
        {
            for(int i = 0; i < word.Length/2; i++)
            {
                if(word[i] != word[word.Length - i - 1])
                {
                    return false;
                }

            }

            return true;
        }


        public static void Pairs(int[] list)
        {
            Dictionary<int, int> pairs = new Dictionary<int, int>();
            for(int i = 0; i< list.Length; i++)
            {
                if (!pairs.ContainsKey(list[i]))
                {
                    pairs.Add(list[i], 1);

                }
                else
                {
                    var value  = pairs[list[i]];
                    pairs.Remove(list[i]);
                
                    pairs.Add(list[i], value + 1);
                }
                

            }

            foreach (KeyValuePair<int, int> entry in pairs) {
                if (entry.Value == 2)
                {
                    Console.WriteLine(" The Number " + entry.Key + " : is Repeted " + entry.Value + " Times");
                }
                
            }

        }


        public int[] TwoSum(int target, int[] array)
        {
            for(int i = 0; i < array.Length; i++)
            {
                for(int j = 0; j < array.Length; j++)
                {
                    if(array[i] == target - array[j])
                    {
                        return new int[] { i, j };
                    }
                }
            }
            return null;

        }

    }
}



