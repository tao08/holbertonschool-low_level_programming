#include"lists.h"
/**
 * free_list - frees a list.
 * @head: is the list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tao;

	while (head)
	{
		tao = head;
		head = head->next;
		free(tao->str);
		free(tao);
	}
}
