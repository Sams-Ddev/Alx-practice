#include "main.h"

/**
 * puts_currentenv -Prints the current environment.
 * @info: A structure that holds possible arguments,
 * aiming to maintain a consistent function prototype.
 * Return: Always 0
 */
int puts_currentenv(info_r *info)
{
	putsStrg_List(info->env);
	return (0);
}

/**
 * env_getValue - Retrieves the value of an environment variable.
 * @info: A structure holding potential arguments,
 * used for maintaining consistent functionality and structure.
 * @name: Environment variable name.
 *
 * Return: the value
 */
char *env_getValue(info_r *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = ChkStart_haystk(node->strg, name);
		if (p && *p)
			return (p);
		node = node->nXtNode;
	}
	return (NULL);
}

/**
 * int_envVar - Initialize a  verynew working environment variable,
 * or modify an existing one
 * @info:A structure designed to contain possible arguments,
 * with the purpose of maintaining a consistent function prototype.
 * Return: Always 0
 */
int int_envVar(info_r *info)
{
	if (info->arg_count != 3)
	{
		printStrg_input("Incorrect number of arguements\n");
		return (1);
	}
	if (init_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * del_envVar - Delete an environment variable.
 * @info: A data structure designed to hold potential arguments,
 * ensuring a consistent function prototype.
 * Return: Always 0
 */
int del_envVar(info_r *info)
{
	int i;

	if (info->arg_count == 1)
	{
		printStrg_input("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->arg_count; i++)
		del_setenv(info, info->argv[i]);

	return (0);
}

/**
 * populate_envList - populates env linked list
 * @info: A data structure designed to hold potential
 * arguments, ensuring a consistent function prototype.
 * Return: Always 0
 */
int populate_envList(info_r *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		addEndNode(&node, environ[i], 0);
	info->env = node;
	return (0);
}

